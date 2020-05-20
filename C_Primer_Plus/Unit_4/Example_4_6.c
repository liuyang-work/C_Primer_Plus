/*
*@FileName:Example_4_6.c
*@Author: Liu Yang
*@Date:  2020/5/19 上午10:51
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 上午10:51
*/

#include "stdio.h"
#define PI 3.141593
int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;            //研究printf()函数的功能
    printf("The %d contestants ate %f berry pies.\n",number,pies);
    printf("The value PI is %f.\n",PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n",'$',2*cost);

    return 0;
}
