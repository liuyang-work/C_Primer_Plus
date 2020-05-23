/*
*@FileName:Example_8_4.c
*@Author: Liu Yang
*@Date:  2020/5/23 9:14
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/23 9:14
*/

#include "stdio.h"
int main(void) {

    int guess = 1;

    printf("Pick an integer from 1 to 100.I will try to guess");
    printf("it.\nRespond with a y if my guess is right "
           "and with an n if it is wrong.\n");
    printf("Uh......is your number %d?\n", guess);

    while (getchar() != 'y')       //获取响应，与y做对比
    {
        printf("Well,,then it is %d?\n", ++guess);
        /*while (getchar()!='\n');
        continue;*/
    }
    printf("I knew I could do it!\n");

    return 0;
}