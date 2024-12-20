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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/goran/Desktop/F2023/COE758/Labs/Tutorial1/Tutorial1/Tutorial1.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_674763465_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_2326890903_3212880686_p_0(char *t0)
{
    char t15[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5372U);
    t5 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t15, t4, t2, (unsigned char)3);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t1 = (30U != t11);
    if (t1 == 1)
        goto LAB13;

LAB14:    t16 = (t0 + 3336);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t23 = *((char **)t19);
    memcpy(t23, t5, 30U);
    xsi_driver_first_trans_fast(t16);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(50, ng0);
    t16 = (t0 + 1512U);
    t17 = *((char **)t16);
    t16 = (t0 + 5372U);
    t18 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t15, t17, t16, (unsigned char)3);
    t19 = (t15 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = (1U * t20);
    t22 = (30U != t21);
    if (t22 == 1)
        goto LAB11;

LAB12:    t23 = (t0 + 3336);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 30U);
    xsi_driver_first_trans_fast(t23);
    goto LAB9;

LAB11:    xsi_size_not_matching(30U, t21, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(30U, t11, 0);
    goto LAB14;

}

static void work_a_2326890903_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (29 - 29);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 0U, 8U, 0LL);

LAB2:    t11 = (t0 + 3256);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2326890903_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2326890903_3212880686_p_0,(void *)work_a_2326890903_3212880686_p_1};
	xsi_register_didat("work_a_2326890903_3212880686", "isim/Tutorial1TestBench_isim_beh.exe.sim/work/a_2326890903_3212880686.didat");
	xsi_register_executes(pe);
}
