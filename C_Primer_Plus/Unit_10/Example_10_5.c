/*
*@FileName:Example_10_5.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:19
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:19
*/

#include "stdio.h"
#define MONTHS 12
int main(void) {
    int days[MONTHS] = {31,28,[4] = 31,30,31,[1]=29};

    for (int i =0; i <MONTHS ; ++i) {
        printf("%2d  %d\n",i+1,days[i]);
    }

    return 0;
}