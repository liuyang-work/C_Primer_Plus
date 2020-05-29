/*
*@FileName:Example_11_10.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:21
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:21
*/
#include "stdio.h"
char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st,n,stdin);
    if (ret_val)   //¼Èret_val £¡= NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}