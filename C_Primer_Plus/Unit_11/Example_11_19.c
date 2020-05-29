/*
*@FileName:Example_11_19.c
*@Author: Liu Yang
*@Date:  2020/5/29 16:23
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 16:23
*/
//拼接两个字符串，检查第一个数组的大小
#include "stdio.h"
#include "string.h"
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char * st,int n);
int main(void) {
    char flower[SIZE];
    char addon[] = "s smell like a old shoes";
    char bug[BUGSIZE];

    puts("What is your favorite flower?");
    s_gets(flower,SIZE);
    if ((strlen(addon)+strlen(flower)+1) <= SIZE)
        strcat(flower,addon);
    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug,BUGSIZE);
    int a = BUGSIZE - strlen(bug) - 1;
    strncat(bug,addon,a);
    puts(bug);

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