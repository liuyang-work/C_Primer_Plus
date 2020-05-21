/*
*@FileName:Example_6_12.c
*@Author: Liu Yang
*@Date:  2020/5/21 9:39
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 9:39
*/

#include "stdio.h"
int main(void) {
    int num;

    printf("   n    n cubed\n");
    for (num = 1; num <= 6; ++num) {
        printf("%5d %5d\n",num,num*num*num);
    }

    return 0;
}