/*
*@FileName:Example_9_6.c
*@Author: Liu Yang
*@Date:  2020/5/25 8:38
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 8:38
*/
//µ›πÈ—› æ
#include "stdio.h"
void up_and_down(int n);
int main(void) {
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n",n,&n);
    if (n<4)
        up_and_down(n+1);      //µ›πÈµ˜”√
    printf("LEVEL %d: n location %p\n",n,&n);
}