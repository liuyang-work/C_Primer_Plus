/*
*@FileName:Example_9_2.c
*@Author: Liu Yang
*@Date:  2020/5/24 12:52
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/24 12:52
*/

#include "stdio.h"
#include "string.h"         //为strlen()提供原型
#define NAME "GIGATHINK,INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch, int num);    //函数原型
int main(void) {
    int space;

    show_n_char('*', WIDTH);    //调用函数
    printf("\n");
    show_n_char(SPACE,12);    //用符号常量做参数
    printf("%s\n",NAME);
    space = (WIDTH - strlen(ADDRESS) ) / 2;  //计算要跳过多少空格
    show_n_char(SPACE, space);         //用一个变量作为参数
    printf("%s\n",ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);  //用一个表达式作为参数
    printf("%s\n",PLACE);

    show_n_char('*', WIDTH);      //调用函数
    printf("\n");

    return 0;
}


void show_n_char(char ch, int num)         //定义函数
{

    for (int count = 1; count <= num; ++count)
        putchar(ch);

}