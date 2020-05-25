/*
*@FileName:Example_9_7.c
*@Author: Liu Yang
*@Date:  2020/5/25 8:48
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 8:48
*/

#include "stdio.h"
long fact(int n);
long rfact(int n);
int main(void) {
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value int the range 0-12 (q to quit)\n");
    while (scanf("%d",&num)==1)
    {
        if (num<0)
            printf("No negative numbers,please.");
        else if (num>12)
            printf("Keep input under 13./\n");
        else
        {
            printf("loop:%d factorial = %ld\n",num,fact(num));
            printf("recursion:%d factorial = %ld\n",num,rfact(num));
        }
        printf("Enter a value int the range 0-12 (q to quit)\n");
    }
    printf("Bye!\n");

    return 0;
}

long fact(int n)    //ʹ��ѭ���ĺ���
{
    long ans;

    for (ans=1; n > 1; n--) {
        ans*=n;
    }
    return ans;
}
//1��ʱ��return1
//2��ʱ��return1*2
//3��ʱ��return1*2*3
/*
long rfact(int n)       //ʹ�õݹ�ĺ���
{
    long ans =n;
    if (n>1)
    ans *= rfact(n-1);
    return ans;
}*/
long rfact(int n)
{
    long ans;

    if (n>0)
        ans = n *rfact(n-1);
    else
        ans = 1;
    return ans;
}