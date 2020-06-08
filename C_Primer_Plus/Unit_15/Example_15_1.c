/*
*@FileName:Example_15_1.c
*@Author: Liu Yang
*@Date:  2020/6/6 9:45
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/6 9:45
*/
//ʹ��λ������ʾ������
#include "stdio.h"
#include "limits.h"     //�ṩCHAR_BIT�Ķ��壬CHAR_BIT��ʾÿ�ֽڵ�λ��
char *itobs(int,char *);
void show_bstr(const char *);
int main(void) {
    char bin_str[CHAR_BIT*sizeof(int)+1];
    int number;

    puts("Enter integers and see them in binary(q to quit).");
    puts("Non-numeric input terminates program.");
    while (scanf("%d",&number) == 1)
    {
        itobs(number,bin_str);
        printf("%d is ",number);
        show_bstr(bin_str);
        putchar('\n');

    }
    puts("Bye!");

    return 0;
}

char *itobs(int n,char *ps)
{
    int i;
    const static int size = CHAR_BIT*sizeof(int);

    for (i = size-1; i >=0; i--,n >>= 1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}
void show_bstr(const char *str)
{
    int i=0;
    while (str[i])      //����һ�����ַ�
    {
        putchar(str[i]);
        if (++i%4 == 0 && str[i])
            putchar(' ');
    }

}