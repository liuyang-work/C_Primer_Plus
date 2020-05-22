/*
*@FileName:Example_7_8.c
*@Author: Liu Yang
*@Date:  2020/5/22 11:10
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 11:10
*/

#include "stdio.h"
#define COVERAGE 350        //每罐油漆可刷的面积
int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d",&sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet%COVERAGE==0)) ? 0:1;
        printf("You need %d %s of Paint.\n",cans,cans==1?"can":"cans");
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}