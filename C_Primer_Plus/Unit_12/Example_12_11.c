/*
*@FileName:Example_12_11.c
*@Author: Liu Yang
*@Date:  2020/6/1 12:00
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 12:00
*/

#include "stdio.h"
#include "stdlib.h"   //�ṩ�⺯��rand()ԭ��
#include "Example_12_12.h"

int roll_count = 0;    //�ⲿ����

static int rollem(int sides)     //�ú������ڸ��ļ�˽��
{
    int roll;

    roll = rand() % sides+1;
    ++roll_count;   //���㺯�����ô���

    return roll;
}

int roll_n_dice(int dice,int sides)
{
    int d;
    int total = 0;
    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice<1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }

    for (d = 0; d < dice; ++d) {
        total += rollem(sides);
    }
    return total;
}