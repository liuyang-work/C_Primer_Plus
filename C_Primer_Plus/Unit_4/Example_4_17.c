/*
*@FileName:Example_4_17.c
*@Author: Liu Yang
*@Date:  2020/5/19 下午1:23
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 下午1:23
*/

#include "stdio.h"
int main(void) {
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d",n);


    return 0;
}
