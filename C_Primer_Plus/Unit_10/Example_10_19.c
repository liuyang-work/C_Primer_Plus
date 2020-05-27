/*
*@FileName:Example_10_19.c
*@Author: Liu Yang
*@Date:  2020/5/27 11:18
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 11:18
*/
#include "stdio.h"
#define COLS 4
int sum(const int ar[], int n);
int sum2d(const int ar[][COLS], int rows);
int main(void) {
    int totla1;
    int totla2;
    int totla3;
    int *pt1;
    int (*pt2)[COLS];

    pt1 = (int [2]){10,20};
    pt2 = (int [2][COLS]){{1,2,3,-9},{4,5,6,-8}};

    totla1 = sum(pt1,2);
    totla2 = sum2d(pt2,2);
    totla3 = sum((int []){4,4,4,5,5,5},6);
    printf("total1 = %d\n",totla1);
    printf("total2 = %d\n",totla2);
    printf("total3 = %d\n",totla3);

    return 0;
}

int sum(const int ar[], int n)
{
    int total =0;

    for (int i = 0; i < n; ++i) {
        total += ar[i];
    }
    return total;
}


int sum2d(const int ar[][COLS], int rows)
{
    int tot = 0;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < COLS; ++c) {
            tot += ar[r][c];
        }
    }
    return tot;
}