/*
*@FileName:Example_9_1.c
*@Author: Liu Yang
*@Date:  2020/5/24 11:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/24 11:50
*/

#include "stdio.h"
#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void starbar(void);    //����ԭ��
int main(void) {
    starbar();    //���ú���

    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);

    starbar();      //���ú���

    return 0;
}


void starbar(void)         //���庯��
{

    for (int count = 1; count < WIDTH; ++count) {
        putchar('*');
    }
    printf("\n");
}