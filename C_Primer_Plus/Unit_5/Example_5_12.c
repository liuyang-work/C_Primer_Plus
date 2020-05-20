/*
*@FileName:Example_5_12.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午9:35
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午9:35
*/

#include "stdio.h"
#define MAX 100
int main(void) {
    int count = MAX+1;

    while (--count>0){
        printf("%d bottles of spring water on the wall,%d bottles of spring water\n",count,count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n",count-1);

    }
    return 0;
}
