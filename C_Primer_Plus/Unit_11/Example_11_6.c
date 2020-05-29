/*
*@FileName:Example_11_6.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:00
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:00
*/

#include "stdio.h"
#define STLEN 81
int main(void) {
    char words[STLEN];

    puts("Enter a string please.");
    gets(words);  //µ‰–Õ”√∑®
    printf("Your string twice::\n");
    printf("%s\n",words);
    puts(words);
    printf("Done!\n");


    return 0;
}