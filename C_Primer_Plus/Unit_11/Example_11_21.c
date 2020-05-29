/*
*@FileName:Example_11_21.c
*@Author: Liu Yang
*@Date:  2020/5/29 17:01
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 17:01
*/
//程序能正常运行
#include "stdio.h"
#include "string.h"

#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st,int n);
int main(void) {
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    while (strcmp(try,ANSWER) != 0)
    {
        puts("No, that's wrong.Try again.");
        s_gets(try,SIZE);
    }
    puts("That's right");

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