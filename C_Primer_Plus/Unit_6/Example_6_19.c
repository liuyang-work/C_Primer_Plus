/*
*@FileName:Example_6_19.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:38
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:38
*/

#include "stdio.h"
#define SIZE 10
#define PAR 72
int main(void) {
    int index,score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n",SIZE);
    for (index = 0; index <SIZE ; ++index) {
        scanf("%d",&score[index]);         //��ȡʮ������
    }
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE ; ++index) {
        printf("%5d",score[index]);   //������֤
    }
    printf("\n");
    for (index = 0; index < SIZE ; ++index){
        sum += score[index];        //���ܷ�
    }
    average = (float )sum/SIZE;     //��ƽ����
    printf("Sum of scores = %d,average = %.2f\n",sum,average);
    printf("That a handicap of %.0f\n",average-PAR);



    return 0;
}