/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Goncalo/Documents/FEUP/LSDi/Aula_Pratica_04/LSDI2015_lab4/dec24.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {8U, 0U};



static void Always_9_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(11, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t7, 1, 0, 1);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t7, 2, 0, 1);
    t11 = (t0 + 1448);
    xsi_vlogvar_assign_value(t11, t7, 3, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t3, 1, 0, 1);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t3, 2, 0, 1);
    t9 = (t0 + 1448);
    xsi_vlogvar_assign_value(t9, t3, 3, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t3, 1, 0, 1);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t3, 2, 0, 1);
    t9 = (t0 + 1448);
    xsi_vlogvar_assign_value(t9, t3, 3, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t3, 1, 0, 1);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t3, 2, 0, 1);
    t9 = (t0 + 1448);
    xsi_vlogvar_assign_value(t9, t3, 3, 0, 1);
    goto LAB14;

}


extern void work_m_00000000004119401358_0788499569_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000004119401358_0788499569", "isim/datapath_isim_beh.exe.sim/work/m_00000000004119401358_0788499569.didat");
	xsi_register_executes(pe);
}
