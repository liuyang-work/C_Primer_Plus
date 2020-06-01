/*
*@FileName:Example_12_2.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:00
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:00
*/
#include "stdio.h"

int main(void) {
    int n = 8;

    printf("    Initially, n = %d at %p\n",n,&n);
    for (int n = 1; n < 3; ++n) {
        printf("     loop 1: n = %d at %p\n",n,&n);

    }
    printf("After loop 1,n = %d at %p\n",n,&n);
    for (int n = 1; n < 3; ++n) {
        printf("  loop 2 index n = %d at %p\n",n,&n);
        int n = 6;
        printf("     loop 2: n = %d at %p\n",n,&n);
        n++;
    }
    printf("After loop 2,n = %d at %p\n",n,&n);
    return 0;
}