/*
*@FileName:Example_8_3.c
*@Author: Liu Yang
*@Date:  2020/5/23 9:02
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/23 9:02
*/

#include "stdio.h"
#include "stdlib.h"         //Ϊ��ʹ��exit()
int main(void) {
    int ch;
    FILE * fp;
    char filename[40];          //�洢�ļ���

    printf("Enter th name of the file:");
    scanf("%s", filename);
    fp = fopen(filename, "r");   //�򿪴���ȡ�ļ�
    if (fp == NULL)         //���ʧ��
    {
        printf("Failed to open file.Bye!");
        exit(1);           //�˳�����
    }
    //�Ӵ򿪵��ļ��л�ȡһ���ַ�
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);                     //�ر��ļ�


    return 0;
}