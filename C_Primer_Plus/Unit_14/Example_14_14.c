/*
*@FileName:Example_14_14.c
*@Author: Liu Yang
*@Date:  2020/6/4 15:15
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 15:15
*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10       //最大书籍量
char *s_gets(char *st, int n);

struct book{            //建立book模板
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void) {
    struct book library[MAXBKS];        //结构数组
    int count = 0;
    int index, filecount;
    FILE *pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("book.dat", "a+b")) == NULL) {
        fputs("Can't open book.dat file", stderr);
        exit(1);
    }

    rewind(pbooks);     //定位到文件开始处
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1) {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS) {
        fputs("the book.dat file is full.", stderr);
        exit(2);
    }

    puts("Please add new book title.");
    puts("Press [Enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        s_gets(library[count].author,MAXAUTL);
        puts("Now enter the value.");
        scanf("%f",&library[count++].value);
        while (getchar() != '\n')
            continue;       //清理输入行
        if (count<MAXBKS)
            puts("Enter the next title.");
    }

    if (count>0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0;  index < count ; index++) {
            printf("%s by %s: $%.2f\n",library[index].title,
                   library[index].author,library[index].value);
        }
        fwrite(&library[filecount],size,count-filecount,pbooks);
    }
    else
    {
        printf("No books? Too bad.\n");
    }
    puts("Bye.\n");
    fclose(pbooks);

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
