/*
*@FileName:Example_10_4.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:15
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:15
*/

#include "stdio.h"
int main(void) {
    const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;


    for (index = 0; index < sizeof(days)/sizeof(days[0]) ; ++index)
    {
        printf("Month %2d has %2d days.\n",index+1,days[index]);
    }

    return 0;
}