/*
*@FileName:Example_9_5.c
*@Author: Liu Yang
*@Date:  2020/5/25 8:34
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 8:34
*/

#include "stdio.h"
int imax(int n,int m);   //º¯ÊýÉùÃ÷
int main(void) {

    printf("The maximum of %d and %d is %d.\n",3,5,imax(3,5));
    printf("The maximum of %d and %d is %d.\n",3,5,imax(3.0,5.0));

    return 0;
}

int imax(int n,int m)
{
    return (n > m ? n : m);
}
