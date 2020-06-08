/*
*@FileName:Example_16_5.c
*@Author: Liu Yang
*@Date:  2020/6/7 10:39
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/7 10:39
*/
//±ä²Îºê
#include "stdio.h"
#include "math.h"
#define PR(X,...) printf("Message" #X ":"__VA_ARGS__)

int main(void) {
    double x = 48;
    double y;
    y= sqrt(x);
    PR(1,"x = %g\n",x);
    PR(2,"x = %.2f,y = %.4f\n",x,y);

    return 0;
}