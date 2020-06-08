/*
*@FileName:Example_16_21.c
*@Author: Liu Yang
*@Date:  2020/6/8 19:57
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 19:57
*/
#include "stdio.h"
#include "stdarg.h"
double sum(int,...);

int main(void) {
    double s,t;

    s = sum(3,1.1,2.5,13.3);
    t = sum(6,1.1,2.1,13.1,4.1,5.1,6.1);
    printf("return value for sum(3,1.1,2.5,13.3):%g\n",s);
    printf("return value for sum(6,1.1,2.1,13.1,4.1,5.1,6.1):%g\n",t);

    return 0;
}

double sum(int lim,...)
{
    va_list ap;
    double tot = 0;
    int i;

    va_start(ap,lim);                   //把ap初始化为参数列表
    for (i = 0; i < lim; ++i) {
        tot += va_arg(ap,double );      //访问参数列表中的每一项
    }
    va_end(ap);                         //清理工作

    return tot;
}