/*
*@FileName:Example_16_9.c
*@Author: Liu Yang
*@Date:  2020/6/8 9:49
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 9:49
*/
//使用条件编译
#include "stdio.h"
#define JUST_CHECKING
#define LIMIT 4


int main(void) {
    int i;
    int total = 0;

    for ( i = 1; i <= LIMIT; ++i) {
        total += 2* i*i +1;
#ifdef JUST_CHECKING
        printf("i = %d, running total = %d\n",i,total);
#endif
    }
    printf("Grand total = %d\n",total);

    return 0;
}