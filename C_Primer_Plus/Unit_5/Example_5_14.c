/*
*@FileName:Example_5_14.c
*@Author: Liu Yang
*@Date:  2020/5/20 12:49
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 12:49
*/

#include "stdio.h"
int main(void) {
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'C';
    printf("ch = %c,i = %d,f1 = %2.2f\n",ch,i,f1);
    ch = ch + 1;
    i = f1 + 2*ch;
    f1 = 2.0*ch + i;
    printf("ch = %c,i = %d,f1 = %2.2f\n",ch,i,f1);
    ch = 1107;
    printf("Now ch = %c\n",ch);
    ch = 80.89;
    printf("Now ch = %c\n",ch);

    return 0;
}