/*
*@FileName:Example_7_3.c
*@Author: Liu Yang
*@Date:  2020/5/22 9:34
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 9:34
*/

#include "stdio.h"
#include "ctype.h"
int main(void) {
    char ch;

           //��ȡһ���ַ�
    while ((ch = getchar()) != '\n'){
        if (isalpha(ch))     //�����һ����ĸ����ʾ���ַ�����һ���ַ�
            putchar(ch+1);
        else
            putchar(ch);        //����
                                //ԭ����ʾ
    }
    putchar(ch);        //��ӡ���з�


    return 0;
}