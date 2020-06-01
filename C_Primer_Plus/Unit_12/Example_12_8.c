/*
*@FileName:Example_12_8.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:47
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:47
*/
#include "Example_12_7.c"
#include "stdio.h"
extern unsigned int rand0(void );

int main(void) {
    int count;

    for (count = 0; count < 5; ++count) {
        printf("%d\n",rand0());
    }

    return 0;
}