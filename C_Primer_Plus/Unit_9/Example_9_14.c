/*
*@FileName:Example_9_14.c
*@Author: Liu Yang
*@Date:  2020/5/26 8:22
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/26 8:22
*/


#include "stdio.h"
void interchange(int u,int v);
int main(void) {
    int x= 5,y = 10;
    printf("Originally x = %d and y = %d.\n",x,y);
    interchange(x,y);
    printf("Now x = %d and y = %d.\n",x,y);

    return 0;
}

void interchange(int u,int v) {
    int temp;

    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}