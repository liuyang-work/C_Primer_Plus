/*
*@FileName:Example_10_1.c
*@Author: Liu Yang
*@Date:  2020/5/26 8:28
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/26 8:28
*/
//打印每个月的天数
#include "stdio.h"
#define MONTHS 12
int main(void) {
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int index = 0; index < 12; ++index) {
        printf("Month %2d has %2d days\n",index+1,days[index]);
    }

    return 0;
}