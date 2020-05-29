/*
*@FileName:Example_11_16.c
*@Author: Liu Yang
*@Date:  2020/5/29 12:56
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 12:56
*/
//�û��Զ����������
#include "stdio.h"
void put1(const char * string);
int put2(const char * string);

int main(void) {

    put1("If I'd as much money");
    put1("as I could spend,\n");
    printf("I could %d characters.\n",put2("I never would cry old chairs to mend"));


    return 0;
}

void put1(const char * string)   //����ı��ַ���
{
    while (*string != '\0')
        putchar(*string++);
}

int put2(const char * string)
{
    int count = 0;
    while (*string)  //�����÷�
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;

}