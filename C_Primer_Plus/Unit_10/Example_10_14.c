/*
*@FileName:Example_10_14.c
*@Author: Liu Yang
*@Date:  2020/5/27 10:14
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 10:14
*/
//处理数组的函数
#include "stdio.h"
#define SIZE 5
void show_array(const double ar[],int n);
void mult_array(double ar[],int n,double mult);

int main(void) {
    double dip[SIZE] = {20.0,17.66,8.2,15.3,22.22};

    printf("The original dip array:\n");
    show_array(dip,SIZE);
    mult_array(dip,SIZE,2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip,SIZE);

    return 0;
}

void show_array(const double ar[],int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%8.3f",ar[i]);
    }
    putchar('\n');
}

void mult_array(double ar[],int n,double mult)
{
    for (int i = 0; i < n; ++i) {
        ar[i] *= mult;
    }
}