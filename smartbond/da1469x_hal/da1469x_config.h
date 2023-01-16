/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef __DA1469X_CONFIG_H_
#define __DA1469X_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <zephyr/irq.h>

#define MCU_OTPM_BASE 			(0x30080000UL)
#define MCU_OTPM_SIZE 			(4096)
#define MCU_OTPM_CS_OFFSET		(0x0c00)
#define MCU_OTPM_CS_LENGTH		(0x0400)

#define MCU_TRIMV_GROUP_ID_MAX		(18)

#define MCU_RCX_CAL_REF_CNT		(100)

#define DA1469X_IRQ_DISABLE()		irq_lock()
#define DA1469X_IRQ_ENABLE(_key)	irq_unlock(_key)

#ifdef __cplusplus
}
#endif

#endif /* __DA1469X_CONFIG_H_ */
