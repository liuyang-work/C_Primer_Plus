/*
*@FileName:Example_6_5.c
*@Author: Liu Yang
*@Date:  2020/5/21 8:51
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 8:51
*/

#include "stdio.h"
#include "math.h"
int main(void) {
        const double ANSWER = 3.14159;
        double response;


        printf("What is the value of pi?\n");
        scanf("%lf",&response);
        while (fabs(response-ANSWER)>0.0001){       //使用fabs()函数进行浮点数比较，
            printf("Try again!\n");
            scanf("%lf",&response);
        }

        printf("close enough!");

    return 0;
}