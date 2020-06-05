/*
*@FileName:Example_14_6.c
*@Author: Liu Yang
*@Date:  2020/6/4 8:52
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 8:52
*/
//传递指向结构的指针
#include "stdio.h"
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(const struct funds * money);

int main(void) {
    struct funds stan = {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Saving and Loan",
            8543.94
    };
    printf("Stan has a total of $%.2f\n",sum(&stan));

    return 0;
}

double sum(const struct funds * money)
{
    return (money->bankfund + money->savefund);
}