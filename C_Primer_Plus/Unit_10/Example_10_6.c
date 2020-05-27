/*
*@FileName:Example_10_6.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:22
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:22
*/

#include "stdio.h"
#define SIZE 4
int main(void) {
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;

    printf("value1  = %d ,value2 = %d \n",value1,value2);
    for (int i = -1; i <=SIZE ; ++i) {
        arr[i] = 2*i+1;
    }

    for (int i = -1; i < 7;++i) {
        printf("%2d  %d\n",i,arr[i]);
    }

    printf("value1  = %d ,value2 = %d \n",value1,value2);
    printf("address of arr[-1]: %p \n",&arr[-1]);
    printf("address of arr[4]: %p \n",&arr[4]);
    printf("address of value1: %p \n",&value1);
    printf("address of value2: %p \n",&value2);

    return 0;
}