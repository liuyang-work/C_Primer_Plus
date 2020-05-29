/*
*@FileName:Example_11_17.c
*@Author: Liu Yang
*@Date:  2020/5/29 13:03
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 13:03
*/
//使用缩短字符串长度的函数
#include "stdio.h"
#include "string.h"         //内含字符串函数原型
void fit(char *string,unsigned int size);

int main(void) {
    char mesg[] = "Thing should be as simple as possible, but not simpler.";

    puts(mesg);
    fit(mesg,38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg+39);

    return 0;
}

void fit(char *string,unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';
}