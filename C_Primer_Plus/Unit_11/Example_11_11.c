/*
*@FileName:Example_11_11.c
*@Author: Liu Yang
*@Date:  2020/5/29 11:27
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 11:27
*/

//Ê¹ÓÃscanf()º¯Êý
#include "stdio.h"
int main(void) {
    char name1[11],name2[11];
    int count;

    printf("Please enter two names.\n");
    count = scanf("%5s %10s",name1,name2);
    printf("I read the %d names %s and %s.\n",count,name1,name2);

    return 0;
}