/*
*@FileName:Example_10_3.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:14
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:14
*/


#include "stdio.h"
#define SIZE 4
int main(void) {
    int no_data[SIZE]={1492,1066};


    printf("%2s%14s\n","i","no_data[i]");
    for (int i = 0; i <SIZE ; ++i) {
        printf("%2d%14d\n",i,no_data[i]);
    }
    return 0;
}