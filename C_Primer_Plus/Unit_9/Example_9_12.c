/*
*@FileName:Example_9_12.c
*@Author: Liu Yang
*@Date:  2020/5/26 8:12
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/26 8:12
*/

#include "stdio.h"
void mikado(int bah);
        int main(void) {
    int pooh =2,bah =5; //�������ľֲ�����

    printf("In main(),pooh = %d and &pooh = %p\n ",pooh,&pooh);
    printf("In main(),bah = %d and &bah = %p\n ",bah,&bah);
    mikado(pooh);


    return 0;
}

void mikado(int bah)  //���庯��
{
    int pooh = 10;      //�����ľֲ�����

    printf("In mikado(),pooh = %d and &pooh = %p\n ",pooh,&pooh);
    printf("In mikado(),bah = %d and &bah = %p\n ",bah,&bah);
}