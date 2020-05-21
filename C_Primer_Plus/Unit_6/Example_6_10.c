/*
*@FileName:Example_6_110.c
*@Author: Liu Yang
*@Date:  2020/5/21 9:28
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 9:28
*/

#include "stdio.h"
int main(void) {
    const int NUMBER = 22;
    int count = 1;                  //初始化


    while (count<=NUMBER){           //测试
        printf("Be my Valentine\n");//行为
        count++;        //更新计数
    }

    return 0;
}