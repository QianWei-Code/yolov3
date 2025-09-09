/**
 * @brief main 函数
 * @file main.c
 * @version 1.0
 * @author arthur.cai 
 * @date 2024-09-30 11:49:39
 * @copyright Copyright (c) ECOFLOW 2017 - 2024. All rights reserved.
 * 
 * @details 文件详细描述，包含使用场景，依赖项等
 * @par 修改日志:
 * <table>
 * <tr><th>Date                     <th>Author          <th>Description
 * <tr><td>2024-09-30 11:49:39      <td>arthur.cai      <td>创建文件
 */
#define DEF_DBG_I
#define DEF_DBG_W
#define DEF_DBG_E

#include "driverlib.h"
#include "device.h"
#include "main.h"

void main(void)
{
    // hal_init();
    xf_core_system_init();
    xf_auto_init_mod_init();
    EINT;
    while(1) {
        xf_task_div_sch();
    }

}
