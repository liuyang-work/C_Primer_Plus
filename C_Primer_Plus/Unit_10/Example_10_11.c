/*
*@FileName:Example_10_11.c
*@Author: Liu Yang
*@Date:  2020/5/27 9:15
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 9:15
*/


#include "stdio.h"
#define SIZE 10
int sum(int*,int*);
int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbles,marbles+SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    return 0;
}

int sum(int * start,int * end)     //使用指针算法
{
    int total = 0;

    while (start<end)
    {
        total += *start;        //把数组元素的值加起来
        start++;            //让指针指向下一个元素
    }


    return total;
}