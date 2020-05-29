/*
*@FileName:Example_11_16.c
*@Author: Liu Yang
*@Date:  2020/5/29 12:56
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 12:56
*/
//用户自定义输出函数
#include "stdio.h"
void put1(const char * string);
int put2(const char * string);

int main(void) {

    put1("If I'd as much money");
    put1("as I could spend,\n");
    printf("I could %d characters.\n",put2("I never would cry old chairs to mend"));


    return 0;
}

void put1(const char * string)   //不会改变字符串
{
    while (*string != '\0')
        putchar(*string++);
}

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