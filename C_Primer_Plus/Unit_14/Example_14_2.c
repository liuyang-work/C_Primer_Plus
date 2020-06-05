/*
*@FileName:Example_14_2.c
*@Author: Liu Yang
*@Date:  2020/6/3 18:13
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 18:13
*/
//包含多本书书的图书目录
#include "stdio.h"
#include "string.h"
char * s_gets(char *st, int n);
#define MAXTITL 40    //书名的最大长度
#define MAXAUTL 40    //作者姓名的最大长度
#define MAXBKS 100      //书籍的最大数量

struct book{        //建立book模板
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};          //结构模板结束

int main(void) {
    struct book library[MAXBKS];    //book类型结构的数组
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Please [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL
    && library[count].title[0]!= '\0')
    {
        printf("Now enter the author:\n");
        s_gets(library[count].author,MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while (getchar() != '\n')
            continue;       //清理输入行
        if (count<MAXBKS)
            printf("Enter the next title.\n");
    }

    c

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