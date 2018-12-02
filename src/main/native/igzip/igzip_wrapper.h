/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _IGZIP_WRAPPER_H_
#define _IGZIP_WRAPPER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "IntelCompressionCodecJNI.h"

extern int32_t igzip_wrapper_init(void);

extern int32_t igzip_wrapper_compress(intel_codec_context_t *context,
    const uint8_t *src, uint32_t srcLen, uint8_t *dst, uint32_t *dstLen);

extern int32_t igzip_wrapper_decompress(intel_codec_context_t *context,
    const uint8_t *src, uint32_t srcLen, uint8_t *dst, uint32_t *dstLen);

extern char *igzip_wrapper_get_library_name();

#ifdef __cplusplus
}
#endif

#endif /* _IGZIP_WRAPPER_H_ */