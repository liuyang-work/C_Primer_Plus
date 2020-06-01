/*
*@FileName:Example_12_1.c
*@Author: Liu Yang
*@Date:  2020/6/1 10:55
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 10:55
*/

#include "stdio.h"
int main(void) {
    int x = 30;         //原始的X
    printf("x in outer block : %d at %p\n",x,&x);
    {
        int x = 77;    //新的x ，隐藏了原始的x
        printf("x in outer block : %d at %p\n",x,&x);
    }
    printf("x in outer block : %d at %p\n",x,&x);
    while (x++<33)      //原始的x
    {
        int x = 100;         //新的x ，隐藏了原始的x
        x++;
        printf("x in while loop: %d at %p\n",x,&x);
    }
    printf("x in outer block : %d at %p\n",x,&x);

    return 0;
}