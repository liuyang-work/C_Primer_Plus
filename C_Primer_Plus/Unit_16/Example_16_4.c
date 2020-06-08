/*
*@FileName:Example_16_4.c
*@Author: Liu Yang
*@Date:  2020/6/7 10:11
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/7 10:11
*/
//使用##运算符
#include "stdio.h"
#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n "= %d\n",x##n);
int main(void) {
    int XNAME(1) = 14;          //变成int x1 = 14;
    int XNAME(2) = 20;          //变成int x2 = 20;
    int x3 = 30;

    PRINT_XN(1)              //变成printf("x1 = %d\n",x1);
    PRINT_XN(2)              //变成printf("x2 = %d\n",x2);
    PRINT_XN(3)              //变成printf("x3 = %d\n",x3);

    return 0;
}