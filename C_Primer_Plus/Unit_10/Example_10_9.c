/*
*@FileName:Example_10_9.c
*@Author: Liu Yang
*@Date:  2020/5/27 9:05
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 9:05
*/

#include "stdio.h"
#define MONTHS 12

int main(void) {
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int index = 0; index < MONTHS; ++index) {
        printf("Months %2d has %d days.\n",index+1,*(days+index));//Óëdays[index]ÏàÍ¬
    }
    return 0;
}