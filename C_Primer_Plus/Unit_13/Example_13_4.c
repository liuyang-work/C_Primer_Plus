/*
*@FileName:Example_13_4.c
*@Author: Liu Yang
*@Date:  2020/6/3 8:30
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 8:30
*/

#include "stdio.h"
#include "stdlib.h"
#define CNTL_Z '\032'  //dos文本文件中的文件结尾标记
#define SLEN 81
int main(void) {
    char file[SLEN];
    char ch;
    FILE *fp;
    long count,last;

    puts("Enter the name of the file to bo processed:");
    scanf("%80s",file);
    if ((fp = fopen(file,"rb")) == NULL)  //只读模式
    {
        printf("reverse can't open %s\n",file);
        exit(EXIT_FAILURE);
    }

    fseek(fp,0l,SEEK_END);      //定位到文件末尾
    last = ftell(fp);
    for (count = 1L; count <= last; ++count) {
        fseek(fp,-count,SEEK_END);      //回退
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r')    //MS-DOS 文件
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}