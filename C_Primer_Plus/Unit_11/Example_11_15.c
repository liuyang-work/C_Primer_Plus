/*
*@FileName:Example_.c
*@Author: Liu Yang
*@Date:  2020/5/29 12:53
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 12:53
*/

#include "stdio.h"
int put2(const char * string)
{
    int count = 0;
    while (*string)  //常规用法
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;

}