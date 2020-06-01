/*
*@FileName:Example_12_5.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:17
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:17
*/
#include "Example_12_6.c"
#include "stdio.h"
void report_count();
void accumulate(int k);
int count =0;       //文件作用域，外部链接
int main(void) {
    int value;      //自动变量
    register int  i;     //寄存器变量

    printf("Enter a positive integer (0  to quit):");
    while (scanf("%d",&value) == 1 && value>0)
    {
        ++count;  //使用文件作用域变量
        for (i = value; i >= 0; i--) {
            accumulate(i);
        }
        printf("Enter a positive integer (0  to quit):");
    }
    report_count();

    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n",count);

}