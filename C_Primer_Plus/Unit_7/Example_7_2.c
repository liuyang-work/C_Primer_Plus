/*
*@FileName:Example_7_2.c
*@Author: Liu Yang
*@Date:  2020/5/22 9:28
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 9:28
*/

#include "stdio.h"
#define SPACE ' '      //SPACE表示一个空格
int main(void) {
    char ch;

    ch = getchar();          //读取一个字符
    while (ch != '\n'){
        if (ch == SPACE)     //留下空格，字符不变
            putchar(ch);
        else
            putchar(ch+1);        //改变其他字符
        ch = getchar();       //获取下一个字符
    }
    putchar(ch);        //打印换行符

    return 0;
}