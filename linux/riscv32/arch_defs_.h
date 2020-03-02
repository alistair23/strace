/*
 * Fallback file for arch-specific definitions.
 *
 * Copyright (c) 2020 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#define ARCH_TIMESIZE 64

#if defined(RISCV32)
# define HAVE_ARCH_TIME32_SYSCALLS 0
#endif

#define HAVE_ARCH_OLD_TIME64_SYSCALLS 0
