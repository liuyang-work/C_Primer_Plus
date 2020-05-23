/*
*@FileName:Example_8_3.c
*@Author: Liu Yang
*@Date:  2020/5/23 9:02
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/23 9:02
*/

#include "stdio.h"
#include "stdlib.h"         //为了使用exit()
int main(void) {
    int ch;
    FILE * fp;
    char filename[40];          //存储文件名

    printf("Enter th name of the file:");
    scanf("%s", filename);
    fp = fopen(filename, "r");   //打开带读取文件
    if (fp == NULL)         //如果失败
    {
        printf("Failed to open file.Bye!");
        exit(1);           //退出程序
    }
    //从打开的文件中获取一个字符
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);                     //关闭文件


    return 0;
}