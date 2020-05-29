/*
*@FileName:Example_11_9.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:16
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:16
*/
//使用fgets()
#include "stdio.h"
#define STLEN 10
int main(void) {
    char words[STLEN];
    int i ;

    puts("Eenter strings (empty line to quit):");
    while (fgets(words,STLEN,stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else        //如果words[i] == '\0' 就执行这部分代码
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done");
    return 0;
}