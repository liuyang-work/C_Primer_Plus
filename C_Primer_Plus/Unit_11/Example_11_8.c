/*
*@FileName:Example_11_8.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:12
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:12
*/
// π”√fgets()∫Õfputs()
#include "stdio.h"
#define STLEN 10
int main(void) {
    char words[STLEN];

    puts("Eenter strings (empty line to quit):");
    while (fgets(words,STLEN,stdin) != NULL && words[0] != '\n')
        fputs(words,stdout);
    puts("Done!");

    return 0;
}