/*
*@FileName:Example_4_16.c
*@Author: Liu Yang
*@Date:  2020/5/19 下午1:13
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 下午1:13
*/

#include "stdio.h"
int main(void) {
    unsigned width,precision;
    int num = 256;
    double weight = 242.5;
    printf("Enter a field width:\n");
    scanf("%d",&width);
    printf("The number is :%*d\n",width,num);
    printf("now enter a width and a precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight=%*.*f\n",width,precision,weight);
    printf("Done");


    return 0;
}
