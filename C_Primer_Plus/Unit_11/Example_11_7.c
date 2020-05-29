/*
*@FileName:Example_11_7.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:03
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:03
*/

#include "stdio.h"
#define STLEN 14
int main(void) {
    char words[STLEN];

    puts("Enter a string  please.\n");
    fgets(words,STLEN,stdin);
    printf("Your string twice (puts() then fputs()):\n");
    puts(words);
    fputs(words,stdout);
    puts("Enter another string, please.");
    fgets(words,STLEN,stdin);
    printf("Your string twice (puts() then fputs()):\n");
    puts(words);
    fputs(words,stdout);   //不会自动添加换行
    puts("Done!");   //自动添加换行

    return 0;
}