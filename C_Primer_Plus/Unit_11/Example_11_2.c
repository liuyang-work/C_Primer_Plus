/*
*@FileName:Example_11_2.c
*@Author: Liu Yang
*@Date:  2020/5/29 10:32
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 10:32
*/
//把字符串看做指针
#include "stdio.h"
int main(void) {
    printf("%s, %p, %c\n","We","are",*"space farers");

    return 0;
}