/*
*@FileName:Example_14_10.c
*@Author: Liu Yang
*@Date:  2020/6/4 9:53
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 9:53
*/
//ʹ��ָ���malloc()

#include "stdio.h"
#include "string.h"     //�ṩstrcpy������strlen����ԭ��
#include "stdlib.h"       //�ṩmalloc������free����ԭ��
#define NLEN 81

struct namect{      //ʹ��ָ��
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect *);      //�����ڴ�
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);      //���øú���ʱ�ͷ��ڴ�
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
    //�����ڴ��Դ洢��
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
        find = strchr(st,'\n'); //���һ��з�
        if (find)               //�����ַ����Null
            *find = '\0';       //�ڴ˴�����һ�����ַ�
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

