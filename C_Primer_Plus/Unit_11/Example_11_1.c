/*
*@FileName:Example_11_1.c
*@Author: Liu Yang
*@Date:  2020/5/29 10:28
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 10:28
*/

#include "stdio.h"
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main(void) {
    char word[MAXLENGTH] = "I am a string in an array";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(word);
    puts(pt1);
    word[8] = 'p';
    puts(word);

    return 0;
}