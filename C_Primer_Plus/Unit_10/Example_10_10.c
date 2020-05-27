/*
*@FileName:Example_10_10.c
*@Author: Liu Yang
*@Date:  2020/5/27 9:09
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 9:09
*/

#include "stdio.h"
#define SIZE 10
int sum(int ar[],int n);
int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbles,SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("THE size of marbles is %zd byte\n",sizeof(marbles));

    return 0;
}

int sum(int ar[],int n)     //这个数组的大小是
{
    int total = 0;

    for (int i = 0; i < n; ++i) {
        total += ar[i];
    }
    printf("THE size of ar is %zd byte\n",sizeof(ar));
    return total;
}