/*
*@FileName:Example_14_1.c
*@Author: Liu Yang
*@Date:  2020/6/3 17:45
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 17:45
*/

//一本书的图书目录
#include "stdio.h"
#include "string.h"
char * s_gets(char *st, int n);
#define MAXTITL 41    //书名的最大长度
#define MAXAUTL 31    //作者姓名的最大长度

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};          //结构模板结束



int main(void) {
    struct book library;    //把library声明为一个book类型的变量

    printf("Please enter the book title.\n");
    s_gets(library.title,MAXTITL);      //访问title部分
    printf("Now enter the author.\n");
    s_gets(library.author,MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f",&library.value);
    printf("%s by %s: $%.2f\n",library.title,library.author,library.value);
    printf("%s: \" %s\" ($%.2f)\n",library.author,library.title,library.value);
    printf("Done!\n");

    return 0;
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