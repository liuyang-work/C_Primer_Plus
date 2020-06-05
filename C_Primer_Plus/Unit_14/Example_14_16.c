/*
*@FileName:Example_14_16.c
*@Author: Liu Yang
*@Date:  2020/6/5 10:46
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/5 10:46
*/
//使用函数指针
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#define LEN 81
char *s_gets(char *st, int n);
char showmenu(void );
void eatline(void );        //读取至行末尾
void show(void (*fp)(char *),char * str);
void Toupper(char *);       //把字符串转化为大写
void Tolower(char *);       //把字符串转化为小写
void Transpose(char *);      //大小写转置
void Dummy(char *);          //不更改字符串
int main(void) {
    char line[LEN];
    char copy[LEN];
    char choice;
    void (*pfun)(char *);//声明一个函数指针，被指向的函数接受char*类型的参数，无返回值

    puts("Enter a string(empty line to quit):");
    while (s_gets(line,LEN) != NULL && line[0] != '\0') {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice)     //switch语句设置指针
            {
                case 'u':
                    pfun = Toupper;
                    break;
                case 'l':
                    pfun = Tolower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
            }
            strcpy(copy, line);      //为show（）函数拷贝一份
            show(pfun, copy);        //根据用户的选择，使用特定的函数
        }
        puts("Enter a string(empty line to quit):");
    }
    puts("Bye!");

    return 0;
}

char showmenu(void )
{
    char ans;
    puts("Enter menu choice:");
    puts("u)  uppercase        l)lowercase");
    puts("t)  transposed case  o)original case");
    puts("n)  nexting string");
    ans = getchar();        //获取用户输入
    ans = tolower(ans);      //转化为小写
    eatline();                //清理输入行
    while (strchr("ulton",ans) == NULL)
    {
        puts("Please enter a u,l,t,o,or n:");
        ans = tolower(getchar());
        eatline();
    }
    return ans;
}
void eatline(void )      //读取值行末尾
{
    while (getchar()!= '\n')
        continue;
}

void Toupper(char * str)       //把字符串转化为大写
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}
void Tolower(char *str)      //把字符串转化为小写
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}
void Transpose(char *str)      //大小写转置
{
    while (*str)
    {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}
void Dummy(char *str)
{
    //不更改字符串
}

void show(void (*fp)(char *),char * str)
{
    (*fp)(str);         //把用户选定的函数作用于str
    puts(str);          //显示结果
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
