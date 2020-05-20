/*
*@FileName:Example_4_7.c
*@Author: Liu Yang
*@Date:  2020/5/19 上午11:17
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 上午11:17
*/

#include "stdio.h"
#define PAGES 959
int main(void) {
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);

    return 0;
}
