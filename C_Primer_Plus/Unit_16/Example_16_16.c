/*
*@FileName:Example_16_16.c
*@Author: Liu Yang
*@Date:  2020/6/8 16:36
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 16:36
*/
//atexit()ʾ��
#include "stdio.h"
#include "stdlib.h"
void sign_off(void);
void too_bad(void);

int main(void) {
    int n;

    atexit(sign_off);       //ע��sign_off����
    puts("Enter a integer:");
    if (scanf("%d",&n) != 1)
    {
        puts("That's no integer!");
        atexit(too_bad);    //ע��too_bad����
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n",n,(n%2 == 0)?"even":"odd");

    return 0;
}

void sign_off(void )
{
    puts("Thus terminates another magnificent program from");
    puts("SeeSaw Software!");
}

void too_bad(void )
{
    puts("SeeSaw Software extends its heartfelt condolences");
    puts("to you upon the failure of your program.");
}