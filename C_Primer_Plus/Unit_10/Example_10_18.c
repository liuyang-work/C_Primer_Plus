/*
*@FileName:Example_10_18.c
*@Author: Liu Yang
*@Date:  2020/5/27 11:03
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 11:03
*/
//使用边长数组函数

#include "stdio.h"
#define ROWS 3
#define COLS 4
int sum2d(int rows,int cols,int ar[ROWS][COLS]);

int main(void) {
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {
            {2,4,6,8},
            {3,5,7,9},
            {12,10,8,6}
    };

    int morejunk[ROWS-1][COLS+2] ={
            {20,30,40,50,60,70},
            {5,6,7,8,9,10}
    };

    int varr[rs][cs];       //变长数组（VAL）

    for (int i = 0; i < rs; ++i) {
        for (int j = 0; j <cs; ++j) {
            varr[i][j]=i*j+j;
        }
    }

    printf("3x4 array\n");
    printf("Sum of all elements = %d\n",sum2d(ROWS,COLS,junk));

    printf("2x6 array\n");
    printf("Sum of all elements = %d\n",sum2d(ROWS-1,COLS+2,morejunk));

    printf("3x10 array\n");
    printf("Sum of all elements = %d\n",sum2d(rs,cs,varr));
    return 0;
}

//带边长数组形参的函数
int sum2d(int rows,int cols,int ar[rows][cols])
{
    int tot = 0;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            tot += ar[r][c];
        }
    }
    return tot;
}