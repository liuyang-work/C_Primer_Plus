/*
*@FileName:Example_6_5.c
*@Author: Liu Yang
*@Date:  2020/5/21 8:47
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 8:47
*/

#include "stdio.h"
int main(void) {

    int true_val,false_val;

    true_val = (10>2);    //��ϵΪ���ֵ
    false_val = (10==2);  //��ϵΪ�ٵ�ֵ

    printf("true = %d,false = %d\n",true_val,false_val);

    return 0;
}