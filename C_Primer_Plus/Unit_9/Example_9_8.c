/*
*@FileName:Example_9_8.c
*@Author: Liu Yang
*@Date:  2020/5/25 9:40
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 9:40
*/
    //以二进制形式打印整数
#include "stdio.h"
void to_binary(unsigned long n);
int main(void) {
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu",&number)==1)
    {
        printf("Binary equivalent:");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done!\n");

    return 0;
}
void to_binary(unsigned long n)  //递归函数
{
    int r;
    r=n%2;
    if (n>=2)
        to_binary(n/2);
    putchar(r==0?'0':'1');
    return;
}