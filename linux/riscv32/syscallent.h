/*
 * Copyright (c) 2016-2019 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#define sys_ARCH_mmap sys_mmap_4koff
#define ARCH_WANT__LLSEEK 0

#include "32/syscallent.h"

/* #define __NR_riscv_flush_icache (__NR_arch_specific_syscall + 15) */
[259] = { 3,	TM,		SEN(riscv_flush_icache),	"riscv_flush_icache"	},
