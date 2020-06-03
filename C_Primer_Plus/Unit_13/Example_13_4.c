/*
*@FileName:Example_13_4.c
*@Author: Liu Yang
*@Date:  2020/6/3 8:30
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 8:30
*/

#include "stdio.h"
#include "stdlib.h"
#define CNTL_Z '\032'  //dos�ı��ļ��е��ļ���β���
#define SLEN 81
int main(void) {
    char file[SLEN];
    char ch;
    FILE *fp;
    long count,last;

    puts("Enter the name of the file to bo processed:");
    scanf("%80s",file);
    if ((fp = fopen(file,"rb")) == NULL)  //ֻ��ģʽ
    {
        printf("reverse can't open %s\n",file);
        exit(EXIT_FAILURE);
    }

    fseek(fp,0l,SEEK_END);      //��λ���ļ�ĩβ
    last = ftell(fp);
    for (count = 1L; count <= last; ++count) {
        fseek(fp,-count,SEEK_END);      //����
        ch = getc(fp);
        if (ch != CNTL_Z && ch != '\r')    //MS-DOS �ļ�
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}