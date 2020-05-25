/*
*@FileName:Example_9_4.c
*@Author: Liu Yang
*@Date:  2020/5/25 8:30
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 8:30
*/

#include "stdio.h"      //出错误的使用函数
int imax();  //旧式函数声明
int main(void) {
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3));
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3.0,5.0));

    return 0;
}

int imax(n,m)
int n,m;
{
    return (n > m ? n : m);
}