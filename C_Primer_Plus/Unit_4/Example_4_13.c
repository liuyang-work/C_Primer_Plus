/*
*@FileName:Example_4_13.c
*@Author: Liu Yang
*@Date:  2020/5/19 下午12:39
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 下午12:39
*/

#include "stdio.h"
int main(void) {
    int bph2o = 212;
    int rv;


    rv = printf("%d F is water's boiling point.\n",bph2o);
    printf("The printf() function printed %d characters.\n",rv);


    return 0;
}
