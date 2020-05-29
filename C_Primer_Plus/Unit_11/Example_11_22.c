/*
*@FileName:Example_11_22.c
*@Author: Liu Yang
*@Date:  2020/5/29 17:03
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 17:03
*/
//strcmp()µÄ·µ»ØÖµ
#include "stdio.h"
#include "string.h"

int main(void) {
    printf("strcmp(\"A\",\"A\") is");
    printf(" %d\n",strcmp("A","A"));

    printf("strcmp(\"A\",\"B\") is");
    printf(" %d\n",strcmp("A","B"));

    printf("strcmp(\"B\",\"A\") is");
    printf(" %d\n",strcmp("B","A"));

    printf("strcmp(\"C\",\"A\") is");
    printf(" %d\n",strcmp("C","A"));

    printf("strcmp(\"Z\",\"a\") is");
    printf(" %d\n",strcmp("Z","a"));

    printf("strcmp(\"apples\",\"apple\") is");
    printf(" %d\n",strcmp("apples","apple"));



    return 0;
}