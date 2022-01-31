package com.catfixture.virgloverlay.core.impl;

import static com.catfixture.virgloverlay.core.App.app;

import android.content.Context;
import android.os.Handler;
import android.os.Process;

import com.catfixture.virgloverlay.BuildConfig;
import com.catfixture.virgloverlay.core.debug.Dbg;
import com.catfixture.virgloverlay.core.ipc.IServerRemoteCallback;
import com.catfixture.virgloverlay.core.ipc.IServerRemoteService;
import com.catfixture.virgloverlay.core.ipc.IServerStopRemoteCallback;
import com.catfixture.virgloverlay.core.utils.process.ThreadUtils;
import com.catfixture.virgloverlay.core.utils.types.Event;
import com.codezjx.andlinker.AndLinker;
import com.codezjx.andlinker.adapter.OriginalCallAdapterFactory;

public class ServerController implements AndLinker.BindCallback {
    private final Context context;
    private final Handler handler = new Handler();

    private AndLinker mLinker;
    private IServerRemoteService mRemoteService;
    private int serverPID = -1;
    private IServerRemoteCallback serverRemoteCallback;
    public final Event onStateChanged = new Event();

    private IServerStopRemoteCallback serverStopRemoteCallback = () -> {
        if ( mLinker != null && mLinker.isBind()) {
            Stop();
        }
        handler.postDelayed(this::Start,1000);
    };

    public ServerController(Context context) {
        this.context = context;
    }
 
    private void Start() {
        Dbg.Msg("START CMD!");
        AndLinker.enableLogger(true);
        mLinker = new AndLinker.Builder(context)
                .packageName(BuildConfig.APPLICATION_ID)
                .action(BuildConfig.APPLICATION_ID + ".REMOTE_SERVICE_ACTION")
                .addCallAdapterFactory(OriginalCallAdapterFactory.create())
                .build();
        mLinker.setBindCallback(this);
        mLinker.registerObject(serverRemoteCallback);
        mLinker.registerObject(serverStopRemoteCallback);
        mLinker.bind();
    }

    public void Stop() {
        try {
            mLinker.unRegisterObject(serverStopRemoteCallback);
            mLinker.unRegisterObject(serverRemoteCallback);
            mLinker.unbind();
            mLinker.setBindCallback(null);
        } catch (Exception x) {
            Dbg.Error(x);
        }
        try {
            if (serverPID != -1) {
                Process.killProcess(serverPID);
                serverPID = -1;
            } else Dbg.Error("Wrong pid");
        } catch (Exception x) {
            Dbg.Error(x);
        }
        mLinker = null;
        serverRemoteCallback.onServerStopped();
        Dbg.Msg("STOPPED!");
    }

    public IServerRemoteService GetRemote() {
        return mRemoteService;
    }

    @Override
    public void onBind() {
        mRemoteService = mLinker.create(IServerRemoteService.class);
        mRemoteService.RegisterCallback(serverRemoteCallback);
        mRemoteService.RegisterStopCallback(serverStopRemoteCallback);
        serverPID = mRemoteService.GetServerPID();
        Dbg.Msg("BINDED!");
    }

    @Override
    public void onUnBind() {
        mRemoteService = null;
    }

    public void EnableAutomaticMode(IServerRemoteCallback serverRemoteCallback, boolean automaticMode) {
        this.serverRemoteCallback = serverRemoteCallback;
        if (automaticMode) {
            if ( mLinker == null) {
                Start();
            }
        }
    }

    public void SwitchServer(IServerRemoteCallback serverRemoteCallback) {
        this.serverRemoteCallback = serverRemoteCallback;
        if ( mLinker == null) {
            Start();
        } else if (mLinker.isBind()) Stop();
    }
}
