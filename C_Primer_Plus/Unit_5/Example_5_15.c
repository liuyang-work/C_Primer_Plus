/*
*@FileName:Example_5_15.c
*@Author: Liu Yang
*@Date:  2020/5/20 14:14
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/20 14:14
*/

#include "stdio.h"
void pound(int n); //ANSI����ԭ������
int main(void) {
    int times = 5;
    char ch = '!';   //ASCII����33
    float f = 6.0f;

    pound(times);  //int���͵Ĳ���
    pound(ch);   //��pound((int)ch һ��)
    pound(f);   //��pound((int)f һ��)



    return 0;
}

void pound(int n){    //ANSI ����ͷ��񣬽���һ��int����
    while (n-- > 0){
        printf("#");

    }
    printf("\n");
}