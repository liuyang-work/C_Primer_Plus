/*
*@FileName:Example.c
*@Author: Liu Yang
*@Date:  2020/5/22 10:43
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 10:43
*/

#include <stdio.h>
#include "stdbool.h"
#define PERIOD '.'
int main(void) {
    char ch ;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"'&& ch != '\'')
        {
            charcount++;
        }
    }

    printf("There are %d non-qoute characters.\n",charcount);

    return 0;
}