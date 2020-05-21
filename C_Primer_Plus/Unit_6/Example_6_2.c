/*
*@FileName:Example_6_2.c
*@Author: Liu Yang
*@Date:  2020/5/21 8:36
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 8:36
*/

#include "stdio.h"
int main(void) {
    int n=5;

    while (n<7){
        printf("n = %d,\n",n);
        n++;
        printf("Now n = %d,\n",n);

    }
    printf("The loop has finished");

    return 0;
}