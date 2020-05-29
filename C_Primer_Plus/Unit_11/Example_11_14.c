/*
*@FileName:Example_11_14.c
*@Author: Liu Yang
*@Date:  2020/5/29 12:51
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 12:51
*/
//打印字符串，不添加'\n'
#include "stdio.h"
void put1(const char * string)   //不会改变字符串
{
    while (*string != '\0')
        putchar(*string++);
}
