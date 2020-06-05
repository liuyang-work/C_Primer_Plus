/*
*@FileName:Example_14_8.c
*@Author: Liu Yang
*@Date:  2020/6/4 9:16
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 9:16
*/
//使用指向结构的指针
#include "stdio.h"
#include "string.h"
#define NLEN 30

struct namect{
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char * s_gets(char * st,int n);

int main(void) {
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(& person);


    return 0;
}

void getinfo(struct namect * pst)
{
    printf("Please enter your first name.\n");
    s_gets(pst->fname,NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname,NLEN);
}


void makeinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
    printf("%s %s ,your name contains %d letters.\n",pst->fname,pst->lname,pst->letters);
}



char *s_gets(char *st, int n)
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

