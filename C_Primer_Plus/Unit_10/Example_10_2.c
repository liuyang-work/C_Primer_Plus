/*
*@FileName:Exaample_10_2.c
*@Author: Liu Yang
*@Date:  2020/5/26 8:45
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/26 8:45
*/

#include "stdio.h"
#define SIZE 4
int main(void) {
    int no_data[SIZE];      //未初始化数组

    
    printf("%2s%14s\n","i","no_data[i]");
    for (int i = 0; i <SIZE ; ++i) {
        printf("%2d%14d\n",i,no_data[i]);
    }
    return 0;
}