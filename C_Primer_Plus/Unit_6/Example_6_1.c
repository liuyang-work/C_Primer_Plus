/*
*@FileName:Example_6_1.c
*@Author: Liu Yang
*@Date:  2020/5/21 8:23
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 8:23
*/

#include "stdio.h"      //根据用户输入的整数求和

int main(void) {
    long num;
    long sum = 0L; //把sum初始化为0
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    status = scanf("%ld",&num);
    while (status ==1 ){        //“==”表示等于
        sum = sum +num;
        printf("Please enter the next integer (q to quit) :");
        status = scanf("%ld",&num);
    }
    printf("Those integers sum to %ld.\n",sum);


    return 0;
}