/*
*@FileName:Example_10_7.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:31
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:31
*/

#include <stdio.h>   //计算每年的年降水量，年平均降水量和五年中每月的平均降水量
#define MONTHS 12       //一年的月份
#define YEARS 5         //年数
int main(void)
{
    //用2010-2014年的降水量数据初始化数组
    const float rain[YEARS][MONTHS] ={
            //因为数据繁琐，不在按照书本输入
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}

    };

    int year,month;
    float subtot,total;

    printf("YEAR    RAINFALL  (inches)\n");
    for (year = 0,total = 0; year < YEARS; ++year) {
        //每一年各月的降水量总和
        for (month = 0,subtot = 0; month < MONTHS; ++month) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n",2010+year,subtot);
        total += subtot;        //5年的总降水量
    }

    printf("\nThe yearly average is %.1f inches.\n ",total/YEARS);
    printf("MONtHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (month = 0; month < MONTHS; ++month) {
        //每个月五年的总降水量
        for (year = 0,subtot= 0; year < YEARS ;year ++) {
                subtot += rain[year][month];
        }
    printf("%4.1f",subtot/YEARS);
    }
    return 0;
}