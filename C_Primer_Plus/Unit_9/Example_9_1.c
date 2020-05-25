/*
*@FileName:Example_9_1.c
*@Author: Liu Yang
*@Date:  2020/5/24 11:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/24 11:50
*/

#include "stdio.h"
#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void starbar(void);    //函数原型
int main(void) {
    starbar();    //调用函数

    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);

    starbar();      //调用函数

    return 0;
}


void starbar(void)         //定义函数
{

    for (int count = 1; count < WIDTH; ++count) {
        putchar('*');
    }
    printf("\n");
}