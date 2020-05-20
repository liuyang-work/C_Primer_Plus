/*
*@FileName:Example_5_5.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午8:43
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午8:43
*/

#include "stdio.h"
#define SQUARES 64  //棋盘格子数目

int main(void) {
    const double CROP = 2E16;//世界小麦年产颗粒数
    double current,total;
    int count = 1;

    printf("squares     grains    total ");
    printf("fraction    of\n");
    printf("          added         grains    ");
    printf("world total\n");
    total = current = 1.0;  //从一颗颗粒开始
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);

    while (count<SQUARES){
        count = count+1;
        current = 2.0*current;  //下一个格子翻倍
        total = total+current;  //更新总数
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);

    }

    printf("That's all\n");


    return 0;
}
