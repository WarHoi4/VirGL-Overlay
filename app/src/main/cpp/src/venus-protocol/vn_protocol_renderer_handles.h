/* This file is generated by venus-protocol git-e05ae158. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_RENDERER_HANDLES_H
#define VN_PROTOCOL_RENDERER_HANDLES_H

#include "vn_protocol_renderer_types.h"

/* VK_DEFINE_HANDLE(VkInstance) */

static inline void
vn_encode_VkInstance(struct vn_cs_encoder *enc, const VkInstance *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_INSTANCE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkInstance_temp(struct vn_cs_decoder *dec, VkInstance *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    if (vn_cs_handle_indirect_id(VK_OBJECT_TYPE_INSTANCE)) {
        *val = vn_cs_decoder_alloc_temp(dec, sizeof(vn_object_id));
        if (!val)
            return;
    }
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_INSTANCE);
}

static inline void
vn_decode_VkInstance_lookup(struct vn_cs_decoder *dec, VkInstance *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkInstance)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkInstance_handle(VkInstance *val)
{
    *val = (VkInstance)(uintptr_t)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_INSTANCE);
}

/* VK_DEFINE_HANDLE(VkPhysicalDevice) */

static inline void
vn_encode_VkPhysicalDevice(struct vn_cs_encoder *enc, const VkPhysicalDevice *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PHYSICAL_DEVICE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPhysicalDevice_temp(struct vn_cs_decoder *dec, VkPhysicalDevice *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    if (vn_cs_handle_indirect_id(VK_OBJECT_TYPE_PHYSICAL_DEVICE)) {
        *val = vn_cs_decoder_alloc_temp(dec, sizeof(vn_object_id));
        if (!val)
            return;
    }
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PHYSICAL_DEVICE);
}

static inline void
vn_decode_VkPhysicalDevice_lookup(struct vn_cs_decoder *dec, VkPhysicalDevice *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkPhysicalDevice)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkPhysicalDevice_handle(VkPhysicalDevice *val)
{
    *val = (VkPhysicalDevice)(uintptr_t)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_PHYSICAL_DEVICE);
}

/* VK_DEFINE_HANDLE(VkDevice) */

static inline void
vn_encode_VkDevice(struct vn_cs_encoder *enc, const VkDevice *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DEVICE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDevice_temp(struct vn_cs_decoder *dec, VkDevice *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    if (vn_cs_handle_indirect_id(VK_OBJECT_TYPE_DEVICE)) {
        *val = vn_cs_decoder_alloc_temp(dec, sizeof(vn_object_id));
        if (!val)
            return;
    }
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DEVICE);
}

static inline void
vn_decode_VkDevice_lookup(struct vn_cs_decoder *dec, VkDevice *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkDevice)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkDevice_handle(VkDevice *val)
{
    *val = (VkDevice)(uintptr_t)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_DEVICE);
}

/* VK_DEFINE_HANDLE(VkQueue) */

static inline void
vn_encode_VkQueue(struct vn_cs_encoder *enc, const VkQueue *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_QUEUE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkQueue_temp(struct vn_cs_decoder *dec, VkQueue *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    if (vn_cs_handle_indirect_id(VK_OBJECT_TYPE_QUEUE)) {
        *val = vn_cs_decoder_alloc_temp(dec, sizeof(vn_object_id));
        if (!val)
            return;
    }
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_QUEUE);
}

static inline void
vn_decode_VkQueue_lookup(struct vn_cs_decoder *dec, VkQueue *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkQueue)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkQueue_handle(VkQueue *val)
{
    *val = (VkQueue)(uintptr_t)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_QUEUE);
}

/* VK_DEFINE_HANDLE(VkCommandBuffer) */

static inline void
vn_encode_VkCommandBuffer(struct vn_cs_encoder *enc, const VkCommandBuffer *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_COMMAND_BUFFER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkCommandBuffer_temp(struct vn_cs_decoder *dec, VkCommandBuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    if (vn_cs_handle_indirect_id(VK_OBJECT_TYPE_COMMAND_BUFFER)) {
        *val = vn_cs_decoder_alloc_temp(dec, sizeof(vn_object_id));
        if (!val)
            return;
    }
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_COMMAND_BUFFER);
}

static inline void
vn_decode_VkCommandBuffer_lookup(struct vn_cs_decoder *dec, VkCommandBuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkCommandBuffer)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkCommandBuffer_handle(VkCommandBuffer *val)
{
    *val = (VkCommandBuffer)(uintptr_t)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_COMMAND_BUFFER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDeviceMemory) */

static inline void
vn_encode_VkDeviceMemory(struct vn_cs_encoder *enc, const VkDeviceMemory *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DEVICE_MEMORY);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDeviceMemory(struct vn_cs_decoder *dec, VkDeviceMemory *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DEVICE_MEMORY);
}

static inline void
vn_decode_VkDeviceMemory_lookup(struct vn_cs_decoder *dec, VkDeviceMemory *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkDeviceMemory)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkDeviceMemory_handle(VkDeviceMemory *val)
{
    *val = (VkDeviceMemory)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_DEVICE_MEMORY);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCommandPool) */

static inline void
vn_encode_VkCommandPool(struct vn_cs_encoder *enc, const VkCommandPool *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_COMMAND_POOL);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkCommandPool(struct vn_cs_decoder *dec, VkCommandPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_COMMAND_POOL);
}

static inline void
vn_decode_VkCommandPool_lookup(struct vn_cs_decoder *dec, VkCommandPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkCommandPool)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkCommandPool_handle(VkCommandPool *val)
{
    *val = (VkCommandPool)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_COMMAND_POOL);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBuffer) */

static inline void
vn_encode_VkBuffer(struct vn_cs_encoder *enc, const VkBuffer *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_BUFFER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkBuffer(struct vn_cs_decoder *dec, VkBuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_BUFFER);
}

static inline void
vn_decode_VkBuffer_lookup(struct vn_cs_decoder *dec, VkBuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkBuffer)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkBuffer_handle(VkBuffer *val)
{
    *val = (VkBuffer)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_BUFFER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBufferView) */

static inline void
vn_encode_VkBufferView(struct vn_cs_encoder *enc, const VkBufferView *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_BUFFER_VIEW);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkBufferView(struct vn_cs_decoder *dec, VkBufferView *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_BUFFER_VIEW);
}

static inline void
vn_decode_VkBufferView_lookup(struct vn_cs_decoder *dec, VkBufferView *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkBufferView)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkBufferView_handle(VkBufferView *val)
{
    *val = (VkBufferView)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_BUFFER_VIEW);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImage) */

static inline void
vn_encode_VkImage(struct vn_cs_encoder *enc, const VkImage *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_IMAGE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkImage(struct vn_cs_decoder *dec, VkImage *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_IMAGE);
}

static inline void
vn_decode_VkImage_lookup(struct vn_cs_decoder *dec, VkImage *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkImage)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkImage_handle(VkImage *val)
{
    *val = (VkImage)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_IMAGE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImageView) */

static inline void
vn_encode_VkImageView(struct vn_cs_encoder *enc, const VkImageView *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_IMAGE_VIEW);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkImageView(struct vn_cs_decoder *dec, VkImageView *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_IMAGE_VIEW);
}

static inline void
vn_decode_VkImageView_lookup(struct vn_cs_decoder *dec, VkImageView *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkImageView)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkImageView_handle(VkImageView *val)
{
    *val = (VkImageView)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_IMAGE_VIEW);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkShaderModule) */

static inline void
vn_encode_VkShaderModule(struct vn_cs_encoder *enc, const VkShaderModule *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SHADER_MODULE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkShaderModule(struct vn_cs_decoder *dec, VkShaderModule *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SHADER_MODULE);
}

static inline void
vn_decode_VkShaderModule_lookup(struct vn_cs_decoder *dec, VkShaderModule *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkShaderModule)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkShaderModule_handle(VkShaderModule *val)
{
    *val = (VkShaderModule)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_SHADER_MODULE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipeline) */

static inline void
vn_encode_VkPipeline(struct vn_cs_encoder *enc, const VkPipeline *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PIPELINE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPipeline(struct vn_cs_decoder *dec, VkPipeline *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PIPELINE);
}

static inline void
vn_decode_VkPipeline_lookup(struct vn_cs_decoder *dec, VkPipeline *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkPipeline)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkPipeline_handle(VkPipeline *val)
{
    *val = (VkPipeline)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_PIPELINE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineLayout) */

static inline void
vn_encode_VkPipelineLayout(struct vn_cs_encoder *enc, const VkPipelineLayout *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PIPELINE_LAYOUT);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPipelineLayout(struct vn_cs_decoder *dec, VkPipelineLayout *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PIPELINE_LAYOUT);
}

static inline void
vn_decode_VkPipelineLayout_lookup(struct vn_cs_decoder *dec, VkPipelineLayout *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkPipelineLayout)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkPipelineLayout_handle(VkPipelineLayout *val)
{
    *val = (VkPipelineLayout)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_PIPELINE_LAYOUT);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSampler) */

static inline void
vn_encode_VkSampler(struct vn_cs_encoder *enc, const VkSampler *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SAMPLER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkSampler(struct vn_cs_decoder *dec, VkSampler *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SAMPLER);
}

static inline void
vn_decode_VkSampler_lookup(struct vn_cs_decoder *dec, VkSampler *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkSampler)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkSampler_handle(VkSampler *val)
{
    *val = (VkSampler)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_SAMPLER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSet) */

static inline void
vn_encode_VkDescriptorSet(struct vn_cs_encoder *enc, const VkDescriptorSet *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_SET);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorSet(struct vn_cs_decoder *dec, VkDescriptorSet *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_SET);
}

static inline void
vn_decode_VkDescriptorSet_lookup(struct vn_cs_decoder *dec, VkDescriptorSet *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkDescriptorSet)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkDescriptorSet_handle(VkDescriptorSet *val)
{
    *val = (VkDescriptorSet)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_SET);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSetLayout) */

static inline void
vn_encode_VkDescriptorSetLayout(struct vn_cs_encoder *enc, const VkDescriptorSetLayout *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorSetLayout(struct vn_cs_decoder *dec, VkDescriptorSetLayout *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT);
}

static inline void
vn_decode_VkDescriptorSetLayout_lookup(struct vn_cs_decoder *dec, VkDescriptorSetLayout *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkDescriptorSetLayout)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkDescriptorSetLayout_handle(VkDescriptorSetLayout *val)
{
    *val = (VkDescriptorSetLayout)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorPool) */

static inline void
vn_encode_VkDescriptorPool(struct vn_cs_encoder *enc, const VkDescriptorPool *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_POOL);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorPool(struct vn_cs_decoder *dec, VkDescriptorPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_POOL);
}

static inline void
vn_decode_VkDescriptorPool_lookup(struct vn_cs_decoder *dec, VkDescriptorPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkDescriptorPool)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkDescriptorPool_handle(VkDescriptorPool *val)
{
    *val = (VkDescriptorPool)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_POOL);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFence) */

static inline void
vn_encode_VkFence(struct vn_cs_encoder *enc, const VkFence *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_FENCE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkFence(struct vn_cs_decoder *dec, VkFence *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_FENCE);
}

static inline void
vn_decode_VkFence_lookup(struct vn_cs_decoder *dec, VkFence *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkFence)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkFence_handle(VkFence *val)
{
    *val = (VkFence)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_FENCE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSemaphore) */

static inline void
vn_encode_VkSemaphore(struct vn_cs_encoder *enc, const VkSemaphore *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SEMAPHORE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkSemaphore(struct vn_cs_decoder *dec, VkSemaphore *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SEMAPHORE);
}

static inline void
vn_decode_VkSemaphore_lookup(struct vn_cs_decoder *dec, VkSemaphore *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkSemaphore)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkSemaphore_handle(VkSemaphore *val)
{
    *val = (VkSemaphore)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_SEMAPHORE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkEvent) */

static inline void
vn_encode_VkEvent(struct vn_cs_encoder *enc, const VkEvent *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_EVENT);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkEvent(struct vn_cs_decoder *dec, VkEvent *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_EVENT);
}

static inline void
vn_decode_VkEvent_lookup(struct vn_cs_decoder *dec, VkEvent *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkEvent)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkEvent_handle(VkEvent *val)
{
    *val = (VkEvent)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_EVENT);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkQueryPool) */

static inline void
vn_encode_VkQueryPool(struct vn_cs_encoder *enc, const VkQueryPool *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_QUERY_POOL);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkQueryPool(struct vn_cs_decoder *dec, VkQueryPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_QUERY_POOL);
}

static inline void
vn_decode_VkQueryPool_lookup(struct vn_cs_decoder *dec, VkQueryPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkQueryPool)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkQueryPool_handle(VkQueryPool *val)
{
    *val = (VkQueryPool)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_QUERY_POOL);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFramebuffer) */

static inline void
vn_encode_VkFramebuffer(struct vn_cs_encoder *enc, const VkFramebuffer *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_FRAMEBUFFER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkFramebuffer(struct vn_cs_decoder *dec, VkFramebuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_FRAMEBUFFER);
}

static inline void
vn_decode_VkFramebuffer_lookup(struct vn_cs_decoder *dec, VkFramebuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkFramebuffer)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkFramebuffer_handle(VkFramebuffer *val)
{
    *val = (VkFramebuffer)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_FRAMEBUFFER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkRenderPass) */

static inline void
vn_encode_VkRenderPass(struct vn_cs_encoder *enc, const VkRenderPass *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_RENDER_PASS);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkRenderPass(struct vn_cs_decoder *dec, VkRenderPass *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_RENDER_PASS);
}

static inline void
vn_decode_VkRenderPass_lookup(struct vn_cs_decoder *dec, VkRenderPass *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkRenderPass)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkRenderPass_handle(VkRenderPass *val)
{
    *val = (VkRenderPass)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_RENDER_PASS);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineCache) */

static inline void
vn_encode_VkPipelineCache(struct vn_cs_encoder *enc, const VkPipelineCache *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PIPELINE_CACHE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPipelineCache(struct vn_cs_decoder *dec, VkPipelineCache *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PIPELINE_CACHE);
}

static inline void
vn_decode_VkPipelineCache_lookup(struct vn_cs_decoder *dec, VkPipelineCache *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkPipelineCache)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkPipelineCache_handle(VkPipelineCache *val)
{
    *val = (VkPipelineCache)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_PIPELINE_CACHE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorUpdateTemplate) */

static inline void
vn_encode_VkDescriptorUpdateTemplate(struct vn_cs_encoder *enc, const VkDescriptorUpdateTemplate *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorUpdateTemplate(struct vn_cs_decoder *dec, VkDescriptorUpdateTemplate *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE);
}

static inline void
vn_decode_VkDescriptorUpdateTemplate_lookup(struct vn_cs_decoder *dec, VkDescriptorUpdateTemplate *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkDescriptorUpdateTemplate)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkDescriptorUpdateTemplate_handle(VkDescriptorUpdateTemplate *val)
{
    *val = (VkDescriptorUpdateTemplate)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSamplerYcbcrConversion) */

static inline void
vn_encode_VkSamplerYcbcrConversion(struct vn_cs_encoder *enc, const VkSamplerYcbcrConversion *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkSamplerYcbcrConversion(struct vn_cs_decoder *dec, VkSamplerYcbcrConversion *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION);
}

static inline void
vn_decode_VkSamplerYcbcrConversion_lookup(struct vn_cs_decoder *dec, VkSamplerYcbcrConversion *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    *val = (VkSamplerYcbcrConversion)(uintptr_t)vn_cs_decoder_lookup_object(dec, id);
}

static inline void
vn_replace_VkSamplerYcbcrConversion_handle(VkSamplerYcbcrConversion *val)
{
    *val = (VkSamplerYcbcrConversion)vn_cs_get_object_handle((const void **)val, VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION);
}

#endif /* VN_PROTOCOL_RENDERER_HANDLES_H */
