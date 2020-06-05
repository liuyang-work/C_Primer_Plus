/*
*@FileName:Example.c
*@Author: Liu Yang
*@Date:  2020/6/4 8:56
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 8:56
*/
//传递一个结构

#include "stdio.h"
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(struct funds);

int main(void) {
    struct funds stan = {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Saving and Loan",
            8543.94
    };
    printf("Stan has a total of $%.2f\n",sum(stan));

    return 0;
}

double sum(struct funds moolah)
{
    return (moolah.savefund + moolah.bankfund);
}