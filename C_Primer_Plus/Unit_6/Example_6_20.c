/*
*@FileName:Example_6_20.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:53
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:53
*/

#include "stdio.h"
double power(double n,int p);  //函数原型
int main(void) {
    double x,xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf("to which\nthe number will be raised.Enter q to quit.\n");
    while (scanf("%lf %d",&x,&exp)==2){
        xpow = power(x,exp);      //函数调用
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter next pair of numbers or q to quit.\n");

    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n,int p){        //函数定义
    double pow = 1;
    for (int i = 0; i < p ; ++i) {
        pow *= n;
    }
    return pow;    //返回pow的值
}