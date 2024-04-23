/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
 * History : DD.MM.YYYY Version Description
 *         : 05.10.2020 1.00        First Release.
 *         : 02.12.2020 1.01        Added new functions such as the Brainpool curve.
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes   <System Includes> , "Project Includes"
***********************************************************************************************************************/
#include "r_sce_if.h"
#include "hw_sce_ra_private.h"

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Imported global variables and functions (from other files)
***********************************************************************************************************************/

/***********************************************************************************************************************
Exported global variables (to be accessed by other files)
***********************************************************************************************************************/

/***********************************************************************************************************************
Private global variables and functions
***********************************************************************************************************************/

void HW_SCE_p_func002(void)
{
    uint32_t iLoop    = 0U;
    uint32_t iLoop1   = 0U;
    uint32_t iLoop2   = 0U;
    int32_t  jLoop    = 0U;
    uint32_t kLoop    = 0U;
    uint32_t oLoop    = 0U;
    uint32_t oLoop1   = 0U;
    uint32_t oLoop2   = 0U;
    uint32_t dummy    = 0U;
    uint32_t KEY_ADR  = 0U;
    uint32_t OFS_ADR  = 0U;
    uint32_t MAX_CNT2 = 0U;
    (void)iLoop;
    (void)iLoop1;
    (void)iLoop2;
    (void)jLoop;
    (void)kLoop;
    (void)oLoop;
    (void)oLoop1;
    (void)oLoop2;
    (void)dummy;
    (void)KEY_ADR;
    (void)OFS_ADR;
    (void)MAX_CNT2;
    SCE->REG_00H = 0x00005143U;
    SCE->REG_104H = 0x00000f51U;
    SCE->REG_A4H = 0x00000c85U;
    /* WAIT_LOOP */
    while (1U != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_A4H = 0x00000cc5U;
    /* WAIT_LOOP */
    while (1U != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_B0H = 0x00000100U;
    SCE->REG_A4H = 0x00008887U;
    /* WAIT_LOOP */
    while (1U != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    /* WAIT_LOOP */
    while (1U != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    SCE->REG_100H = change_endian_long(0x5c5c5c5cU);
    /* WAIT_LOOP */
    while (0U != SCE->REG_00H_b.B25)
    {
        /* waiting */
    }
    SCE->REG_1CH = 0x00001800U;
}

/***********************************************************************************************************************
End of function ./input_dir/HW_SCE/HW_SCEp/HW_SCEp_func002.prc
***********************************************************************************************************************/
