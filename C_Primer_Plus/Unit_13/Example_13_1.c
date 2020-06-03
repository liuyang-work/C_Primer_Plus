/*
*@FileName:Example_13_1.c
*@Author: Liu Yang
*@Date:  2020/6/2 9:04
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/2 9:04
*/
#include "stdio.h"
#include "stdlib.h"   //提供exit()函数原型
int main(int argc, char *argv[])
{
    int ch;     //读取文件储存每个字符的地方
    FILE *fp;    //文件指针
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("Usage:%s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1],"r"))== NULL)
    {
        printf("Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);        //与putchar(ch)相同
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n",argv[1],count);
    return 0;
}
