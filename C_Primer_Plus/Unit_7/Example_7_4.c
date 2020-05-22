/*
*@FileName:Example_7_4.c
*@Author: Liu Yang
*@Date:  2020/5/22 9:47
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 9:47
*/

#include "stdio.h"
#define RATE1 0.13230       //�״�ʹ��360kwh�ķ���
#define RATE2 0.15040        //������ʹ��108kwh�ķ���
#define RATE3 0.30025        //������ʹ��720kwh�ķ���
#define RATE4 0.34025         //ʹ�ó���720kwh�ķ���
#define BREAK1 360             //���ʵ�һ���ֽ��
#define BREAK2 468               //���ʵڶ����ֽ��
#define BREAK3 720               //���ʵ������ֽ��
#define BASE1 (RATE1 * BREAK1)   //ʹ��360kwh�ķ���
#define BASE2 (BASE1 + (RATE2*(BREAK2-BREAK1)))      //ʹ��468kwh�ķ���
#define BASE3 (BASE1+BASE2+(RATE3*(BREAK3-BREAK2)))     //ʹ��720kwh�ķ���

int main(void) {
    double kwh;
    double bill;

    printf("Please enter the kwh used.\n");
    scanf("%lf",&kwh);       //lf��Ӧdouble����
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2 )             //360~468kwh
        bill = BASE1 +(RATE2 * (kwh - BREAK1));
    else if (kwh<= BREAK3)            //468~720kwh
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else                            //����720kwh
        bill = BASE3 + (RATE4*(kwh - BREAK3));
    printf("The charge for %.1f kwh is %1.2f.\n",kwh,bill);



    return 0;
}