/*
*@FileName:Example_4_11.c
*@Author: Liu Yang
*@Date:  2020/5/19 上午11:44
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 上午11:44
*/

//一些不匹配的整型转
#include "stdio.h"
#define PAGES 336
#define WORDS 65618

int main(void) {
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short :%hd %hu\n",num,num);
    printf("-num as short and unsigned short :%hd %hu\n",mnum,mnum);
    printf("num as int and char :%d %c\n",num,num);
    printf("WORDS as int,short,and char :%d %hd %c\n",WORDS,WORDS,WORDS);


    return 0;
}
