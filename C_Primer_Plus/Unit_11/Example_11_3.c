/*
*@FileName:Example_11_3.c
*@Author: Liu Yang
*@Date:  2020/5/29 10:35
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 10:35
*/

#include "stdio.h"
#define MSG "I'm special"

int main(void) {
    char ar[] = MSG;
    const char * pt = MSG;
    printf("address of \"I'm special\": %p\n","I'm special");
    printf("         address ar:%p\n",ar);
    printf("         address pt:%p\n",pt);
    printf("     address of MSG:%p\n",MSG);
    printf("address of \"I'm special\": %p\n","I'm special");


    return 0;
}