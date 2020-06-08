/*
*@FileName:Example_16_3.c
*@Author: Liu Yang
*@Date:  2020/6/7 9:44
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/7 9:44
*/

#include "stdio.h"

#define PSQR(x) printf("The square of "#x" is %d.\n",((x)*(x)))

int main(void) {

    int y = 5;

    PSQR(y);
    PSQR(2+4);

    return 0;
}