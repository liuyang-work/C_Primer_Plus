/*
*@FileName:Example_12_5.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:17
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:17
*/
#include "Example_12_6.c"
#include "stdio.h"
void report_count();
void accumulate(int k);
int count =0;       //�ļ��������ⲿ����
int main(void) {
    int value;      //�Զ�����
    register int  i;     //�Ĵ�������

    printf("Enter a positive integer (0  to quit):");
    while (scanf("%d",&value) == 1 && value>0)
    {
        ++count;  //ʹ���ļ����������
        for (i = value; i >= 0; i--) {
            accumulate(i);
        }
        printf("Enter a positive integer (0  to quit):");
    }
    report_count();

    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n",count);

}