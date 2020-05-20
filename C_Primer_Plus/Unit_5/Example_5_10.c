/*
*@FileName:Example_5_10.c
*@Author: Liu Yang
*@Date:  2020/5/20 上午9:26
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 上午9:26
*/

#include "stdio.h"
int main(void) {
    int ultra = 0,super = 0;

    while (super<5){
        super++;
        ++ultra;
        printf("super = %d,ultra = %d\n",super,ultra);

    }
    return 0;
}
