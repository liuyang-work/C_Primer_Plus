/*
*@FileName:Example_16_20.c
*@Author: Liu Yang
*@Date:  2020/6/8 19:01
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 19:01
*/
//ʹ��memcpy()��memmove()
#include "stdio.h"
#include "string.h"

#define SIZE 10
void show_array(const int ar[],int n);
//�����������֧��C11��_Static_assert,����ע�͵���һ��
_Static_assert(sizeof(double ) == 2*sizeof(int),"double not twice int size");

int main(void) {
    int values[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int target[SIZE];
    double curious[SIZE/2] = {2.0,2.0e5,2.0e10,2.0e20,5.0e30};

    puts("memcpy() used:");
    puts("values (original data):");
    show_array(values,SIZE);
    memcpy(target,values,SIZE*sizeof(int ));
    puts("target (copy of values):");
    show_array(target,SIZE);

    puts("\nUsing mememove() with overlapping ranges:");
    memmove(values+2,values,5*sizeof(int ));
    puts("values -- elements 0-4 copied to 2-6:");
    show_array(values,SIZE);

    puts("\nUsing memcpy() to copy double to int:");
    memcpy(target,curious,(SIZE/2)*sizeof(double ));
    puts("target -- 5 doubles into 10 int positions:");
    show_array(target,SIZE/2);
    show_array(target+5,SIZE/2);


    return 0;
}

void show_array(const int ar[],int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d ",ar[i]);
    }
    putchar('\n');
}