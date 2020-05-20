/*
*@FileName:Example_5_8.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午9:10
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午9:10
*/

#include "stdio.h"
int main(void) {

    int n=0;
    size_t intsize;

    intsize  = sizeof(int );
    printf("n=%d,n has %zd bytes;all ints have %zd bytes.\n",n,sizeof(n),intsize);

    return 0;
}
