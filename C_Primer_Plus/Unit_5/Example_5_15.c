/*
*@FileName:Example_5_15.c
*@Author: Liu Yang
*@Date:  2020/5/20 14:14
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 14:14
*/

#include "stdio.h"
void pound(int n); //ANSI函数原型声明
int main(void) {
    int times = 5;
    char ch = '!';   //ASCII码是33
    float f = 6.0f;

    pound(times);  //int类型的参数
    pound(ch);   //和pound((int)ch 一样)
    pound(f);   //和pound((int)f 一样)



    return 0;
}

void pound(int n){    //ANSI 函数头风格，接受一个int参数
    while (n-- > 0){
        printf("#");

    }
    printf("\n");
}