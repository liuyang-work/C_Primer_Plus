/*
*@FileName:Example_12_4.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:10
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:10
*/

#include "stdio.h"
int units = 0;   //�ⲿ����
void critic(void );
int main(void) {
    extern int units;  //��ѡ���ظ�����

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while (units!=56)
        critic();
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void )
{
    //ɾ���˿�ѡ���ظ�����
    printf("No luck ,my friend. Try again.\n");
    scanf("%d",&units);
}