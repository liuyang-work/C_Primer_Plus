/*
*@FileName:Example_12_13.c
*@Author: Liu Yang
*@Date:  2020/6/1 12:59
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 12:59
*/
#include "Example_12_11.c"
#include "stdlib.h"         //Ϊ�⺯��srand()�ṩԭ��
#include "stdio.h"
#include "time.h"       //Ϊtime()�ṩԭ��
#include "Example_12_12.h"   //Ϊroll_n_dice()�ṩԭ�ͣ�Ϊroll_count�����ṩ����

int main(void) {
    int dice,roll;
    int sides;
    int status;

    srand((unsigned int) time(0));  //�������
    printf("Enter the number of sides per die,0 to stop.\n");
    while (scanf("%d",&sides) == 1 && sides >0)
    {
        printf("How many dice?\n");
        if ((status = scanf("%d",&dice)) != 1)
        {
            if (status == EOF)
                break;
            else
            {
                printf("You should have enter an integer.");
                printf("Let's begin again.\n");
                while (getchar() != '\n')
                    continue;   //������������
                printf("How many sides?Enter 0 to stop.\n");
                continue;
            }
        }
        roll = roll_n_dice(dice,sides);
        printf("You have rolled a %d using %d %d-sides dice.\n",roll,dice,sides);
        printf("How many sides?Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n",roll_count); //ʹ���ⲿ����
    printf("GOOD FURTUNE TO YOU\n");

    return 0;
}