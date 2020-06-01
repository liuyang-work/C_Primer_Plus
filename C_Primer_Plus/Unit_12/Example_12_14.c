/*
*@FileName:Example_12_14.c
*@Author: Liu Yang
*@Date:  2020/6/1 13:36
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 13:36
*/

#include "stdio.h"
#include "stdlib.h"  //为malloc()和 free()提供函数原型
int main(void) {

    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d",&max) != 1)
    {
        puts("Number not correctly entered --bye.");
        exit(EXIT_FAILURE);
    }
    ptd = (double *) malloc(max*sizeof(double ));
    if (ptd == NULL)
    {
        puts("Memory allocation failed.Goodbye.");
        exit(EXIT_FAILURE);
    }
    //ptd现在指向有max个元素的数组
    puts("Enter the value(q to quit):");
    while (i<max && scanf("%lf",&ptd[i]) == 1)
    {
        ++i;
    }
    printf("Here are your %d entries:\n",number=i);
    for (i = 0; i < number; ++i) {
        printf("%7.2f",ptd[i]);
        if (i % 7 ==6)
            putchar('\n');

    }
    if (i % 7 != 0)
        putchar('\n');
    puts("Done!");
    free(ptd);

    return 0;
}