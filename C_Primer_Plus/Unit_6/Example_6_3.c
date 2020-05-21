/*
*@FileName:Example_6_3.c
*@Author: Liu Yang
*@Date:  2020/5/21 8:40
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 8:40
*/

#include "stdio.h"          //糟糕的创建了一个无限循环
int main(void) {
    int n=0;
    while (n<3)
        printf("n is %d\n",n);
        n++;
     printf("That's all this program dose.");

    return 0;
}