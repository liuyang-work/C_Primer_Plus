/*
*@FileName:Example_6_14.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:02
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:02
*/

#include "stdio.h"
int main(void) {
    int t_ct;  //项计数
    double time,power_of_2;
    int limit;

    printf("Enter the number of terms you want:");
    scanf("%d",&limit);
    for (time=0,power_of_2=1,t_ct=1;t_ct  <= limit ; t_ct++,power_of_2*=2.0) {
        time+=1.0/power_of_2;  //时间总计
        printf("time = %f when terms = %d.\n",time,t_ct);

    }

    return 0;
}