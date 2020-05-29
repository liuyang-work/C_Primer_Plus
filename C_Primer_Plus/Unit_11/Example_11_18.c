/*
*@FileName:Example_11_18.c
*@Author: Liu Yang
*@Date:  2020/5/29 13:13
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 13:13
*/
//拼接两个字符串
#include "string.h"       //strcat()函数原型在该头文件中
#include "stdio.h"
#define SIZE 80
char * s_gets(char * st,int n);

int main(void) {
    char flower[SIZE];
    char addon[] = "s smell like a old shoes";

    puts("What is your favorite flower?");
    if (s_gets(flower,SIZE))
    {
        strcat(flower,addon);
        puts(flower);
        puts(addon);
    }
    else
    {
        puts("End of file encountered!");
    }
    puts("bye");


    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val =  fgets(st, n, stdin);
    if (ret_val)   //既ret_val ！= NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return  ret_val;
}