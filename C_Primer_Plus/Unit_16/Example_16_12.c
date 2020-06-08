/*
*@FileName:Example_16_12.c
*@Author: Liu Yang
*@Date:  2020/6/8 10:17
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 10:17
*/
//预定义宏和预定义标识符
#include "stdio.h"
void why_me(void);

int main(void) {
    printf("The file is %s.\n",__FILE__);
    printf("The date is %s.\n",__DATE__);
    printf("The time is %s.\n",__TIME__);
    printf("The version is %ld.\n",__STDC_VERSION__);
    printf("This is line %d.\n",__LINE__);
    printf("The function is %s.\n",__func__);
    why_me();

    return 0;
}

void why_me(void )
{
    printf("This function is %s.\n",__func__);
    printf("This is line %d.\n",__LINE__);
}