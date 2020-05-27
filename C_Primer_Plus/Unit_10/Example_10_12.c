/*
*@FileName:Example_10_12.c
*@Author: Liu Yang
*@Date:  2020/5/27 9:32
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 9:32
*/

#include "stdio.h"
int data[2] = {100,200};
int moredata[2] = {300,400};
int main(void) {
    int *p1,*p2,*p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("*p1 = %d ,*p2 = %d, *p3 = %d\n",*p1,*p2,*p3);
    printf("*p1++ = %d ,*++p2 = %d, (*p3)++ = %d\n",*p1++,*++p2,(*p3)++);
    printf("*p1 = %d ,*p2 = %d, *p3 = %d\n",*p1,*p2,*p3);

    return 0;
}