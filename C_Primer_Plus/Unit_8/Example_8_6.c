/*
*@FileName:Example_8_6.c
*@Author: Liu Yang
*@Date:  2020/5/23 9:54
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/23 9:54
*/


#include "stdio.h"
void display(char cr,int lines,int width);
int main(void) {
    int ch;         //待打印字符
    int rows,cols;  //行数和列数

    printf("Enter a character and two integer;\n");
    while ((ch = getchar())!='\n')
    {
        if (scanf("%d %d",&rows,&cols)!=2)
            break;
        display(ch,rows,cols);
        while (getchar()!='\n')
            continue;
        printf("Enter another character and two integers;\n");
        printf("Enter a new line to quit.\n");

    }
    printf("Bye\n");

    return 0;
}


void display(char cr,int lines,int width)
{
    int row,col;

    for (row = 1; row <= lines; ++row) {
        for (col = 1; col <= width; ++col) {
            putchar(cr);
        }
        putchar('\n');    //结束一行并开始新的一行

    }

}