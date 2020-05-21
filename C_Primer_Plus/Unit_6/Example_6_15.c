/*
*@FileName:Example_6_15.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:17
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:17
*/

#include "stdio.h"          //出口条件循环
int main(void) {
    const int secret_code = 13;
    int code_entered;

    do {
        printf("To enter the triskaidekaphobia therapy club,\n ");
        printf("please enter the secret code number:");
        scanf("%d",&code_entered);
    }while (code_entered!=secret_code);
    printf("Congratulations ! You are cured!\n");

    return 0;
}