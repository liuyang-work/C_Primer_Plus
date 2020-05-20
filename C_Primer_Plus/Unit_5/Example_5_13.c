/*
*@FileName:Example_5_13.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午9:40
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午9:40
*/

#include "stdio.h"

int main(void) {             //计算前20个整数的和
    int count, sum;
    count = 0;
    sum  = 0;
    while (count++<20){
        sum = sum+count;

    }
    printf("sum = %d\n",sum);

    return 0;
}
