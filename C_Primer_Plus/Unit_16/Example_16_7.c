/*
*@FileName:Example_16_7.c
*@Author: Liu Yang
*@Date:  2020/6/8 8:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 8:50
*/
//定义函数
#include "stdio.h"
#include "Example_16_6.h"   //包含头文件

//函数定义
void get_names(names * pn)
{
    printf("Please enter your first name:");
    s_gets(pn->first,LEN);

    printf("Please enter your last name:");
    s_gets(pn->last,LEN);
}
void show_names(const names * pn)
{
    printf("%s  %s",pn->first,pn->last);
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    char *find;

    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        find = strchr(st,'\n'); //查找换行符
        if (find)               //如果地址不是Null
            *find = '\0';       //在此处放置一个空字符
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}


