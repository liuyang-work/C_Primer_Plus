/*
*@FileName:Example_9_3.c
*@Author: Liu Yang
*@Date:  2020/5/25 8:24
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 8:24
*/

#include "stdio.h"          //找出两个整数中较小的一个
int imin(int n,int m);
int main(void) {
    int evil1,evil2;

    printf("Enter a pair of integers(q to quit):\n");
    while (scanf("%d %d",&evil1,&evil2))
    {
        printf("The lesser of %d and %d is %d.\n",evil1,evil2,imin(evil1,evil2));
        printf("Enter a pair of integers(q to quit):\n");
    }

    return 0;
}

int imin(int n,int m)
{
    int min;

    if (n<m)
        min = n;
    else
        min = m;
    return min;
}