/*
*@FileName:Example_7_2.c
*@Author: Liu Yang
*@Date:  2020/5/22 9:28
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 9:28
*/

#include "stdio.h"
#define SPACE ' '      //SPACE��ʾһ���ո�
int main(void) {
    char ch;

    ch = getchar();          //��ȡһ���ַ�
    while (ch != '\n'){
        if (ch == SPACE)     //���¿ո��ַ�����
            putchar(ch);
        else
            putchar(ch+1);        //�ı������ַ�
        ch = getchar();       //��ȡ��һ���ַ�
    }
    putchar(ch);        //��ӡ���з�

    return 0;
}