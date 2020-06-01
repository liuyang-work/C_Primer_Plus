/*
*@FileName:Example_12_6.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:25
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:25
*/

#include "stdio.h"

extern int count;      //引用式声明，外部链接

static int total = 0;  //静态定义，内部链接
void accumulate(int k);  //函数原型

void accumulate(int k)
{
    static int subtotal = 0;  //静态，无连接

    if (k <= 0)
    {
        printf("loop cycle: %d\n",count);
        printf("subtotal: %d , total: %d \n",subtotal,total);
        subtotal = 0 ;
    } else
    {
        subtotal += k;
        total += k;
    }
}