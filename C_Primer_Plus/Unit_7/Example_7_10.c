/*
*@FileName:Example_7_110.c
*@Author: Liu Yang
*@Date:  2020/5/22 11:49
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 11:49
*/

#include "stdio.h"      //使用break退出循环
int main(void) {
    float length,width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f",&length)==1)
    {
        printf("length = %0.2f:\n",length);
        printf("Enter its widthL\n");
        if (scanf("%f",&width)!=1)
        {
            break;
        }
        printf("width = %0.2f:\n",width);
        printf("Area  = %0.2f:\n",width*length);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done!\n");

    return 0;
}