/*
*@FileName:Example_16_11.c
*@Author: Liu Yang
*@Date:  2020/6/8 10:03
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 10:03
*/
//包含头文件两次
#include "stdio.h"
#include "Example_16_10.h"
#include "Example_16_10.h"      //不小心第二次包含头文件

int main(void) {
    names winner = {"Less","Ismoor"};
    printf("The winner is %s %s.\n",winner.first,winner.last);

    return 0;
}