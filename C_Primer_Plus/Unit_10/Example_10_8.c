/*
*@FileName:Example.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:57
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:57
*/
//指针地址
#include "stdio.h"
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short* pti;
    short index;
    double bills[SIZE];
    double* ptr;

    pti = dates;        //把数组地址赋给指针
    ptr = bills;
    printf("%23s %14s\n","short","double");
    for (index = 0; index < SIZE; ++index) {
        printf("pointers + %d:%10p %10p\n ",index,pti+index,ptr+index);
    }

    return 0;
}