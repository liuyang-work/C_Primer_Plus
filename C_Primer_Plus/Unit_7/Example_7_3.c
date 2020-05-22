/*
*@FileName:Example_7_3.c
*@Author: Liu Yang
*@Date:  2020/5/22 9:34
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 9:34
*/

#include "stdio.h"
#include "ctype.h"
int main(void) {
    char ch;

           //读取一个字符
    while ((ch = getchar()) != '\n'){
        if (isalpha(ch))     //如果是一个字母，显示该字符的下一个字符
            putchar(ch+1);
        else
            putchar(ch);        //否则
                                //原样显示
    }
    putchar(ch);        //打印换行符


    return 0;
}