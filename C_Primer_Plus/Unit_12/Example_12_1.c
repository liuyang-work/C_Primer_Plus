/*
*@FileName:Example_12_1.c
*@Author: Liu Yang
*@Date:  2020/6/1 10:55
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 10:55
*/

#include "stdio.h"
int main(void) {
    int x = 30;         //ԭʼ��X
    printf("x in outer block : %d at %p\n",x,&x);
    {
        int x = 77;    //�µ�x ��������ԭʼ��x
        printf("x in outer block : %d at %p\n",x,&x);
    }
    printf("x in outer block : %d at %p\n",x,&x);
    while (x++<33)      //ԭʼ��x
    {
        int x = 100;         //�µ�x ��������ԭʼ��x
        x++;
        printf("x in while loop: %d at %p\n",x,&x);
    }
    printf("x in outer block : %d at %p\n",x,&x);

    return 0;
}