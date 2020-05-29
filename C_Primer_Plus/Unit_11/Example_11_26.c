/*
*@FileName:Example_11_26.c
*@Author: Liu Yang
*@Date:  2020/5/29 21:45
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 21:45
*/

#include "stdio.h"
#include "string.h"
#define WORDS "beast"
#define SIZE 40

int main(void) {
    const char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy+7,orig);
    puts(copy);
    puts(ps);


    return 0;
}