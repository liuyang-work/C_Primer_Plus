/*
*@FileName:Example_13_2.c
*@Author: Liu Yang
*@Date:  2020/6/2 10:10
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/2 10:10
*/
//���ļ�ѹ����ԭ��������֮һ
#include "stdio.h"
#include "stdlib.h"   //�ṩexit()ԭ��
#include "string.h"    //�ṩstrcpy()��strcat()��ԭ��
#define LEN 40

int main(int argc,char *argv[]) {
    FILE *in,*out;  //��������ָ��FILE��ָ��
    int ch;
    char name[LEN]; //����������ļ���
    int count = 0;

    //��������в���
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    //��������
    if ((in = fopen(argv[1],"r")) ==NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name,argv[1],LEN-5);        //�����ļ���
    name[LEN-5] = '\0';
    strcat(name,".red");  //���ļ��������.red
    if ((out = fopen(name,"w")) == NULL)
    {//��дģʽ���ļ�
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }

    //��������
    while ((ch = getc(in)) != EOF)
    {
        if (count++ % 3 ==0)
        {
            putc(ch,out);   //��ӡ�����ַ����еĵ�һ���ַ�
        }
    }
    if (fclose(in) !=0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}