/*
*@FileName:Example_16_13.c
*@Author: Liu Yang
*@Date:  2020/6/8 11:23
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 11:23
*/
#include "stdio.h"
#define MYTYPE(X) _Generic((X),\
        int :"int",\
        float :"float",\
        double:"double",\
        default:"other"\
)

int main(void) {
    int d =5;

    printf("%s\n",MYTYPE(d));       //d��int����
    printf("%s\n",MYTYPE(2.0*d));//2.0*d��double����
    printf("%s\n",MYTYPE(3L));   //3L��long����
    printf("%s\n",MYTYPE(&d));   //&d��������int *

    return 0;
}