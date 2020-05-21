/*
*@FileName:Example_6_7.c
*@Author: Liu Yang
*@Date:  2020/5/21 8:59
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 8:59
*/

#include "stdio.h"
int main(void) {
    int n = 3;

    while (n){
        printf("%2d is true\n",n--);
    }
    printf("%2d is false\n",n);

    n = -3;
    while (n){
        printf("%2d is true\n",n++);
    }
    printf("%2d is false\n",n);


    return 0;
}