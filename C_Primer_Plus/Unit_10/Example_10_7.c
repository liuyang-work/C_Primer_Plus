/*
*@FileName:Example_10_7.c
*@Author: Liu Yang
*@Date:  2020/5/27 8:31
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 8:31
*/

#include <stdio.h>   //����ÿ����꽵ˮ������ƽ����ˮ����������ÿ�µ�ƽ����ˮ��
#define MONTHS 12       //һ����·�
#define YEARS 5         //����
int main(void)
{
    //��2010-2014��Ľ�ˮ�����ݳ�ʼ������
    const float rain[YEARS][MONTHS] ={
            //��Ϊ���ݷ��������ڰ����鱾����
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}

    };

    int year,month;
    float subtot,total;

    printf("YEAR    RAINFALL  (inches)\n");
    for (year = 0,total = 0; year < YEARS; ++year) {
        //ÿһ����µĽ�ˮ���ܺ�
        for (month = 0,subtot = 0; month < MONTHS; ++month) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n",2010+year,subtot);
        total += subtot;        //5����ܽ�ˮ��
    }

    printf("\nThe yearly average is %.1f inches.\n ",total/YEARS);
    printf("MONtHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (month = 0; month < MONTHS; ++month) {
        //ÿ����������ܽ�ˮ��
        for (year = 0,subtot= 0; year < YEARS ;year ++) {
                subtot += rain[year][month];
        }
    printf("%4.1f",subtot/YEARS);
    }
    return 0;
}