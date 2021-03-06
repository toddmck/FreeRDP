/**
 * WinPR: Windows Portable Runtime
 * Print Utils
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
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
 */

#ifndef WINPR_UTILS_PRINT_H
#define WINPR_UTILS_PRINT_H

#include <winpr/winpr.h>
#include <winpr/wtypes.h>

#define WINPR_HEXDUMP_LINE_LENGTH	16

#ifdef __cplusplus
extern "C" {
#endif

WINPR_API void winpr_HexDump(BYTE* data, int length);

WINPR_API int wprintfx(const char *fmt, ...);

#ifdef __cplusplus
}
#endif

#endif /* WINPR_UTILS_PRINT_H */
