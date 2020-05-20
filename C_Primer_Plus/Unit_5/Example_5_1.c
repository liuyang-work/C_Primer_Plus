/*
*@FileName:Example_5_1.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午8:11
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午8:11
*/

#include "stdio.h"
#define ADJUST 7.31   //字符常量
int main(void) {
    const double SCALE = 0.333;//const 变量
    double shoe,foot;

    shoe = 9.0;
    foot = SCALE*shoe+ADJUST;
    printf("shoe size (Men's) foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);



    return 0;
}
