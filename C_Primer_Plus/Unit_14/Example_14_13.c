/*
*@FileName:Example_14_13.c
*@Author: Liu Yang
*@Date:  2020/6/4 11:25
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 11:25
*/
//把结构数组传递给函数
#include "stdio.h"
#define FUNDLEN 50
#define N 2

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum (const struct funds money[],int n);

int main(void) {
    struct funds jones[N] = {
            {
                    "Garlic-Melon Bank",
                    4032.27,
                    "Lucky's Saving and Loan",
                    8543.94
            },

            {
                    "Honest Jack's Bank",
                    3620.88,
                    "Party Time Saving",
                    3802.91
            }
    };

    printf("The Joneses have a total of $%.2f\n",sum(jones,N));

    return 0;
}

double sum(const struct funds money[],int n)
{
    double total = 0;

    for (int i = 0; i < n; ++i) {
        total += money[i].bankfund+money[i].savefund;
    }
    return total;
}