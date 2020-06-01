/*
*@FileName:Example_12_10.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:52
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:52
*/
#include "Example_12_9.c"
#include "stdio.h"
#include "stdio.h"
extern void srand1(unsigned int x);
extern int rand1(void );
int main(void) {
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf("%u",&seed) == 1)
    {
        srand1(seed);
        for (count = 0; count < 5; ++count) {
            printf("%d\n",rand1());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}