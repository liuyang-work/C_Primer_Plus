/*
*@FileName:Example_5_2.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午8:20


































 *@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午8:20
*/

#include "stdio.h"
#define ADJUST 7.31  //字符常量
int main(void) {

    const double SCALE = 0.333;//const 变量
    double shoe,foot;

    printf("shoe size (Men's) foot length\n");
    shoe = 3.0;
    while (shoe < 18.5){  //while 循环开始
        foot = SCALE*shoe+ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe=shoe+1.0;
    }
    printf("if the shoe fits,wear it");

    return 0;
}
