/*
 * @Author: Shuai Wang 277668922@qq.com
 * @Date: 2024-01-04 08:35:00
 * @LastEditors: Shuai Wang 277668922@qq.com
 * @LastEditTime: 2024-03-13 08:36:21
 * @FilePath: \Demo_LED\Library\SFUD\sfud\drv_spi_flash.c
 * @Description: 
 */
/*
 * Copyright (c) 2020, Armink, <armink.ztl@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <sfud.h>
#include "sfud_cfg.h"

#ifndef SFUD_USING_SFDP

sfud_flash sfud_norflash0 = {
        .name = "norflash0",
        .spi.name = "SPI1",
        .chip = {"W25Q128JV", SFUD_MF_ID_WINBOND, 0x40, 0x18, 16L*1024L*1024L, SFUD_WM_PAGE_256B, 4096, 0x20} };
#endif