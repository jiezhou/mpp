/*
 * Copyright (c) 2019-2020 FoilPlanet. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __HAL_H264E_X264_H__
#define __HAL_H264E_X264_H__

#include "mpp_buffer.h"
#include "mpp_hal.h"
#include "hal_task.h"
#include "hal_h264e_com.h"

MPP_RET hal_h264e_x264_init    (void *hal, MppHalCfg *cfg);
MPP_RET hal_h264e_x264_deinit  (void *hal);
MPP_RET hal_h264e_x264_gen_regs(void *hal, HalTaskInfo *task);
MPP_RET hal_h264e_x264_start   (void *hal, HalTaskInfo *task);
MPP_RET hal_h264e_x264_wait    (void *hal, HalTaskInfo *task);
MPP_RET hal_h264e_x264_reset   (void *hal);
MPP_RET hal_h264e_x264_flush   (void *hal);
MPP_RET hal_h264e_x264_control (void *hal, RK_S32 cmd_type, void *param);

#endif /* __HAL_H264E_X264_H__ */
