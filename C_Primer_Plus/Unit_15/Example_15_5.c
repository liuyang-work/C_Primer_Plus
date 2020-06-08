/*
*@FileName:Example.c
*@Author: Liu Yang
*@Date:  2020/6/6 16:19
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/6 16:19
*/

#include "stdio.h"
int main(void) {
    double dx;
    char ca;
    char cx;
    double dz;
    char cb;
    char _Alignas(double) cz;

    printf("char aligment:    %zd\n",_Alignof(char));
    printf("double aligment:    %zd\n",_Alignof(double));
    printf("&dx:  %p\n",&dx);
    printf("&ca:  %p\n",&ca);
    printf("&cx:  %p\n",&cx);
    printf("&dz:  %p\n",&dz);
    printf("&cb:  %p\n",&cb);
    printf("&cz:  %p\n",&cz);

    return 0;
}