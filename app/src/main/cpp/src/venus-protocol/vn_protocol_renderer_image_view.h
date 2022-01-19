/* This file is generated by venus-protocol git-e05ae158. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_RENDERER_IMAGE_VIEW_H
#define VN_PROTOCOL_RENDERER_IMAGE_VIEW_H

#include "vn_protocol_renderer_structs.h"

/* struct VkImageViewUsageCreateInfo chain */

static inline void *
vn_decode_VkImageViewUsageCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkImageViewUsageCreateInfo_self_temp(struct vn_cs_decoder *dec, VkImageViewUsageCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->usage);
}

static inline void
vn_decode_VkImageViewUsageCreateInfo_temp(struct vn_cs_decoder *dec, VkImageViewUsageCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    assert(stype == VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO);

    val->sType = stype;
    val->pNext = vn_decode_VkImageViewUsageCreateInfo_pnext_temp(dec);
    vn_decode_VkImageViewUsageCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkImageViewUsageCreateInfo_handle_self(VkImageViewUsageCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->usage */
}

static inline void
vn_replace_VkImageViewUsageCreateInfo_handle(VkImageViewUsageCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            vn_replace_VkImageViewUsageCreateInfo_handle_self((VkImageViewUsageCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkImageViewCreateInfo chain */

static inline void *
vn_decode_VkImageViewCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    VkBaseOutStructure *pnext;
    VkStructureType stype;

    if (!vn_decode_simple_pointer(dec))
        return NULL;

    vn_decode_VkStructureType(dec, &stype);
    switch ((int32_t)stype) {
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkImageViewUsageCreateInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkImageViewCreateInfo_pnext_temp(dec);
            vn_decode_VkImageViewUsageCreateInfo_self_temp(dec, (VkImageViewUsageCreateInfo *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkSamplerYcbcrConversionInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkImageViewCreateInfo_pnext_temp(dec);
            vn_decode_VkSamplerYcbcrConversionInfo_self_temp(dec, (VkSamplerYcbcrConversionInfo *)pnext);
        }
        break;
    default:
        /* unexpected struct */
        pnext = NULL;
        vn_cs_decoder_set_fatal(dec);
        break;
    }

    return pnext;
}

static inline void
vn_decode_VkImageViewCreateInfo_self_temp(struct vn_cs_decoder *dec, VkImageViewCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->flags);
    vn_decode_VkImage_lookup(dec, &val->image);
    vn_decode_VkImageViewType(dec, &val->viewType);
    vn_decode_VkFormat(dec, &val->format);
    vn_decode_VkComponentMapping_temp(dec, &val->components);
    vn_decode_VkImageSubresourceRange_temp(dec, &val->subresourceRange);
}

static inline void
vn_decode_VkImageViewCreateInfo_temp(struct vn_cs_decoder *dec, VkImageViewCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    assert(stype == VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO);

    val->sType = stype;
    val->pNext = vn_decode_VkImageViewCreateInfo_pnext_temp(dec);
    vn_decode_VkImageViewCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkImageViewCreateInfo_handle_self(VkImageViewCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->flags */
    vn_replace_VkImage_handle(&val->image);
    /* skip val->viewType */
    /* skip val->format */
    vn_replace_VkComponentMapping_handle(&val->components);
    vn_replace_VkImageSubresourceRange_handle(&val->subresourceRange);
}

static inline void
vn_replace_VkImageViewCreateInfo_handle(VkImageViewCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
            vn_replace_VkImageViewCreateInfo_handle_self((VkImageViewCreateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            vn_replace_VkImageViewUsageCreateInfo_handle_self((VkImageViewUsageCreateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            vn_replace_VkSamplerYcbcrConversionInfo_handle_self((VkSamplerYcbcrConversionInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

static inline void vn_decode_vkCreateImageView_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkCreateImageView *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pCreateInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pCreateInfo));
        if (!args->pCreateInfo) return;
        vn_decode_VkImageViewCreateInfo_temp(dec, (VkImageViewCreateInfo *)args->pCreateInfo);
    } else {
        args->pCreateInfo = NULL;
    }
    if (vn_decode_simple_pointer(dec)) {
        assert(false);
    } else {
        args->pAllocator = NULL;
    }
    if (vn_decode_simple_pointer(dec)) {
        args->pView = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pView));
        if (!args->pView) return;
        vn_decode_VkImageView(dec, args->pView);
    } else {
        args->pView = NULL;
    }
}

static inline void vn_replace_vkCreateImageView_args_handle(struct vn_command_vkCreateImageView *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pCreateInfo)
        vn_replace_VkImageViewCreateInfo_handle((VkImageViewCreateInfo *)args->pCreateInfo);
    /* skip args->pAllocator */
    /* skip args->pView */
}

static inline void vn_encode_vkCreateImageView_reply(struct vn_cs_encoder *enc, const struct vn_command_vkCreateImageView *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkCreateImageView_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->pCreateInfo */
    /* skip args->pAllocator */
    if (vn_encode_simple_pointer(enc, args->pView))
        vn_encode_VkImageView(enc, args->pView);
}

static inline void vn_decode_vkDestroyImageView_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkDestroyImageView *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkImageView_lookup(dec, &args->imageView);
    if (vn_decode_simple_pointer(dec)) {
        assert(false);
    } else {
        args->pAllocator = NULL;
    }
}

static inline void vn_replace_vkDestroyImageView_args_handle(struct vn_command_vkDestroyImageView *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkImageView_handle(&args->imageView);
    /* skip args->pAllocator */
}

static inline void vn_encode_vkDestroyImageView_reply(struct vn_cs_encoder *enc, const struct vn_command_vkDestroyImageView *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkDestroyImageView_EXT});

    /* skip args->device */
    /* skip args->imageView */
    /* skip args->pAllocator */
}

static inline void vn_dispatch_vkCreateImageView(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkCreateImageView args;

    if (!ctx->dispatch_vkCreateImageView) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkCreateImageView_args_temp(ctx->decoder, &args);

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkCreateImageView(ctx, &args);

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && args.ret < VK_SUCCESS) {
        switch (args.ret) {
        case VK_ERROR_FORMAT_NOT_SUPPORTED:
            break;
        default:
            vn_dispatch_debug_log(ctx, "vkCreateImageView returned %d", args.ret);
            break;
        }
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkCreateImageView_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkDestroyImageView(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkDestroyImageView args;

    if (!ctx->dispatch_vkDestroyImageView) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkDestroyImageView_args_temp(ctx->decoder, &args);

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkDestroyImageView(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkDestroyImageView_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

#endif /* VN_PROTOCOL_RENDERER_IMAGE_VIEW_H */
