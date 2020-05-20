/*
*@FileName:Example_4_12.c
*@Author: Liu Yang
*@Date:  2020/5/19 上午11:58
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 上午11:58
*/


//不匹配的浮点性转换
#include "stdio.h"
int main(void) {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e \n",n1,n2,n3,n4);
    printf("%ld %ld \n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);


    return 0;
}
