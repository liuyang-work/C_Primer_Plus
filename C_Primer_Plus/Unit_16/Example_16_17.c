/*
*@FileName:Example_16_17.c
*@Author: Liu Yang
*@Date:  2020/6/8 17:05
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 17:05
*/
//用qsort()排序一组数字
#include <stdio.h>
#include <stdlib.h>

#define NUM 40
void fillarray(double ar[],int n);
void showarray(double ar[],int n);
int mycomp(void * p1,const void * p2);


int main(void) {
    double vals[NUM];
    fillarray(vals,NUM);
    puts("Random list:");
    showarray(vals,NUM);
    qsort(vals, NUM, sizeof(double ), (int (*)(const void *, const void *)) mycomp);
    puts("\nSorted list:");
    showarray(vals,NUM);

    return 0;
}
void fillarray(double ar[],int n)
{
    int index;
    for (index = 0; index < n; ++index) {
        ar[index] = (double) rand()/((double)rand()+0.1);
    }
}
void showarray(double ar[],int n)
{
    int index;

    for (index = 0; index < n; ++index) {
        printf("%9.4f",ar[index]);
        if (index%6 == 5)
            printf("\n");
    }
    if (index%6 != 0)
        putchar('\n');

}

//按照从小到大排序
int  mycomp(void * p1,const void * p2)
{
    //要使用指向double的指针来访问这两个值
    const double * a1 =(const double *) p1;
    const double * a2 =(const double *) p2;

    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}