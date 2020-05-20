/*
*@FileName:Example_4_8.c
*@Author: Liu Yang
*@Date:  2020/5/19 上午11:21
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 上午11:21
*/

#include "stdio.h"
int main(void) {
    const double RENT = 3852.99;  //const 变量

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    return 0;
}
