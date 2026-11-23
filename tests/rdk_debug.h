/**
 * Copyright 2016 Comcast Cable Communications Management, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef _RDK_DEBUG_H_
#define _RDK_DEBUG_H_

#define RDK_LOG_ERROR 0
#define RDK_LOG_INFO  1
#define RDK_LOG_DEBUG 2

typedef int rdk_LogLevel;

void log_rdk(rdk_LogLevel level, const char *module,
        const char *format, ...);

#define RDK_LOG log_rdk

#define RDK_LOGGER_INIT() rdk_logger_init("/etc/debug.ini");

int rdk_logger_init(char* str);

#endif /* _RDK_DEBUG_H_ */
