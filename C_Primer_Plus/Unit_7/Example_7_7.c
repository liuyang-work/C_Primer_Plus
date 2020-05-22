/*
*@FileName:Example_7_7.c
*@Author: Liu Yang
*@Date:  2020/5/22 10:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 10:50
*/

#include "stdio.h"
#include "ctype.h"          //Ϊisspace()�����ṩԭ��
#include "stdbool.h"        //Ϊbool��true��false�ṩ�궨��
#define STOP '|'

int main(void)
{

    char c;         //�����ַ�
    char prev;      //�����ǰһ���ַ�
    long n_chars = 0l;//�ַ���
    int n_lines = 0;    //����
    int n_word = 0;     //������
    int p_lines = 0;    //������������
    bool inword = false;//���c�ڵ����У�inword����true
    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';            //����ʶ����������
    while ((c = getchar()) != STOP)
    {
        n_chars++;          //ͳ���ַ�
        if (c=='\n')
        {
            n_lines++;
        }
        if (!isspace(c) && !inword)
        {
            inword = true;  //��ʼһ���µĵ���
            n_word++;       //ͳ�Ƶ���
        }
        if (isspace(c) && inword)
        {
            inword = false;     //�ﵽ ����ĩβ
        }
        prev = c;           //�����ַ���ֵ
    }

    if (prev != '\n')
    {
        p_lines = 1;
    }
    printf("characters = %ld ,words = %d ,lines = %d,",n_chars,n_word,n_lines);
    printf("partial line = %d\n",p_lines);

    return 0;
}