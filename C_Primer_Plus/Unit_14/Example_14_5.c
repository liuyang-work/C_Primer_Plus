/*
*@FileName:Example_14_5.c
*@Author: Liu Yang
*@Date:  2020/6/4 8:44
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 8:44
*/
//把结构成员作为参数传递
#include "stdio.h"
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double ,double );

int main(void) {
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8543.94
    };

    printf("Stan has a total of $%.2f\n",sum(stan.bankfund,stan.savefund));


    return 0;
}

double sum(double x,double y)
{
    return (x+y);
}