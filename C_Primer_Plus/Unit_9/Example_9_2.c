/*
*@FileName:Example_9_2.c
*@Author: Liu Yang
*@Date:  2020/5/24 12:52
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/24 12:52
*/

#include "stdio.h"
#include "string.h"         //Ϊstrlen()�ṩԭ��
#define NAME "GIGATHINK,INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch, int num);    //����ԭ��
int main(void) {
    int space;

    show_n_char('*', WIDTH);    //���ú���
    printf("\n");
    show_n_char(SPACE,12);    //�÷��ų���������
    printf("%s\n",NAME);
    space = (WIDTH - strlen(ADDRESS) ) / 2;  //����Ҫ�������ٿո�
    show_n_char(SPACE, space);         //��һ��������Ϊ����
    printf("%s\n",ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);  //��һ�����ʽ��Ϊ����
    printf("%s\n",PLACE);

    show_n_char('*', WIDTH);      //���ú���
    printf("\n");

    return 0;
}


void show_n_char(char ch, int num)         //���庯��
{

    for (int count = 1; count <= num; ++count)
        putchar(ch);

}