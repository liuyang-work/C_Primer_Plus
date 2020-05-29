/*
*@FileName:Example_11_23.c
*@Author: Liu Yang
*@Date:  2020/5/29 17:10
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 17:10
*/

#include "string.h"
#include "stdio.h"
#define SIZE 80
#define LIM 10
#define STOP "quit"
char * s_gets(char * st,int n);

int main(void) {
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines(type quit to quit):\n",LIM);
    while (ct<LIM && s_gets(input[ct],SIZE) != NULL && strcmp(input[ct],STOP))
    {
        ct++;
    }
    printf("%d strings entered\n",ct);

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val =  fgets(st, n, stdin);
    if (ret_val)   //��ret_val ��= NULL
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