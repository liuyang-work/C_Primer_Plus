/*
*@FileName:Example_14_10.c
*@Author: Liu Yang
*@Date:  2020/6/4 9:53
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 9:53
*/
//使用指针和malloc()

#include "stdio.h"
#include "string.h"     //提供strcpy（）和strlen（）原型
#include "stdlib.h"       //提供malloc（）和free（）原型
#define NLEN 81

struct namect{      //使用指针
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect *);      //分配内存
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);      //调用该函数时释放内存
char * s_gets(char * st,int n);

int main(void) {
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(& person);
    cleanup(&person);

    return 0;
}

void getinfo(struct namect * pst)
{
    char temp[NLEN];
    printf("Please enter your first name.\n");
    s_gets(temp,NLEN);
    //分配内存以存储名
    pst->fname = (char *) malloc(strlen(temp)+1);
    strcpy(pst->fname,temp);
    printf("Please enter your last name.\n");
    s_gets(temp,NLEN);
    pst->lname = (char *) malloc(strlen(temp)+1);
    strcpy(pst->lname,temp);
}


void makeinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
    printf("%s %s ,your name contains %d letters.\n",pst->fname,pst->lname,pst->letters);
}

void cleanup(struct namect * pst)
{
    free(pst->fname);
    free(pst->lname);
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

