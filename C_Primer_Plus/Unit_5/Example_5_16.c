/*
*@FileName:Example_5_16.c
*@Author: Liu Yang
*@Date:  2020/5/20 14:24
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 14:24
*/

#include "stdio.h"
const int S_PER_M = 60;  //一分钟的秒数
const int S_PER_H = 3600;  //一小时的秒数
const double M_PER_K = 0.62137;  //一公里的英里数

int main(void) {
    double distk, distm = 0;  //跑过的距离
    double rate;                    //平均速度
    int min,sec;                    //跑步用时
    int time;
    double mtime;
    int mmin,msec;

    printf("This program convents your time for a metric race.\n ");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter,in  kilometers,the distance run.\n");
    scanf("%lf",&distk);                  //%lf表示读取一个double类型的值
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin entering the minutes.\n");
    scanf("%d",&min);
    printf("Now,enter the seconds.\n");
    scanf("%d",&sec);

     time = S_PER_M*min+sec;                  //把时间转换成秒
     distm = M_PER_K * distk;             //把公里转换成英里
     rate = distm / time * S_PER_H;
     mtime = (double )time/distm;
     mmin = (int) mtime / S_PER_M;
     msec = (int) mtime % S_PER_M;

     printf("You run %1.2f km (%1.2f miles) in %d min,%d sec\n",distk,distm,min,sec);
     printf("That pace corresponds to running a mile in %d min.",mmin);
     printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);

    return 0;
}