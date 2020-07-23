/* SPDX-License-Identifier: BSD-2-Clause */

/*
 * This is a TEMPLATE. The actual config file is generated by CMake and stored
 * in <BUILD_DIR>/tilck_gen_headers/.
 */

#pragma once
#include <tilck/common/page_size.h>

#define KERNEL_FILE_PATH       "/@KERNEL_FATPART_PATH@"
#define KERNEL_FILE_PATH_EFI   "\\@KERNEL_FATPART_PATH_EFI@"

#define SECTOR_SIZE            @SECTOR_SIZE@
#define BL_ST2_DATA_SEG        @BL_ST2_DATA_SEG@
#define BL_BASE_ADDR           @BL_BASE_ADDR@
#define BL_BASE_SEG            (@BL_BASE_ADDR@ / 16)
#define INITRD_SECTOR          @INITRD_SECTOR@
#define DISK_UUID              @DISK_UUID@
#define IMG_SZ_SEC             @IMG_SZ_SEC@
#define BOOT_SECTORS           @BOOT_SECTORS@

/* Boolean config variables */
#cmakedefine01 BOOTLOADER_POISON_MEMORY
