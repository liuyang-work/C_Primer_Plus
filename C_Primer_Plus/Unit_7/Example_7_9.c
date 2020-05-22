/*
*@FileName:Example_7_9.c
*@Author: Liu Yang
*@Date:  2020/5/22 11:36
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 11:36
*/

#include "stdio.h"         //ʹ��continue����ѭ������
int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit):");
    while (scanf("%f",&score) == 1)
    {
        if (score<MIN || score>MAX)
        {
            printf("%0.1f is an invalid value.Try again:",score);
            continue;           //��ת��whileѭ���Ĳ�������
        }
        printf("Accepting %0.1f:\n",score);
        min  = (score<min)?score:min;
        max = (score>max)?score:max;
        total += score;
        printf("Enter next score(q to quit):");
    }
    if (n>0)
    {
        printf("Average of %d scores is %0.1f.\n",n,total/n);
        printf("Low = %0.1f, high = %0.1f\n",min,max);
    }
    else
    {
        printf("No valid scores were entered.\n");
    }


    return 0;
}