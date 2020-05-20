/*
*@FileName:Example_5_4.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午8:40
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午8:40
*/

#include "stdio.h"
int main(void) {
    int num =1;

    while (num<21){
        printf("%4d %6d\n",num,num*num);
        num+=1;

    }
    return 0;
}
