/*
*@FileName:Example_11_12.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:33
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:33
*/
// π”√puts()
#include "stdio.h"
#define DEF "I am a #define string"
int main(void) {
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me";

    puts("I am am argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);

    return 0;
}