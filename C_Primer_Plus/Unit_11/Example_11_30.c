/*
*@FileName:Example_11_30.c
*@Author: Liu Yang
*@Date:  2020/5/29 22:36
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 22:36
*/

#include "stdio.h"
#include "string.h"
#include "ctype.h"
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void) {
    char line[LIMIT];
    char * find;

    puts("Please enter a line:");
    fgets(line,LIMIT,stdin);
    find = strchr(line,'\n'); //²éÕÒ»»ÐÐ·û
    if (find)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That's line has %d  punctuation characters.\n",PunctCount(line));


    return 0;
}

void ToUpper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}


int PunctCount(const char *str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}