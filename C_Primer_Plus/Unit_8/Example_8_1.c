/*
*@FileName:Example_8_1.c
*@Author: Liu Yang
*@Date:  2020/5/23 8:57
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/23 8:57
*/

#include "stdio.h"
int main(void) {
    char ch;

    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }

    return 0;
}