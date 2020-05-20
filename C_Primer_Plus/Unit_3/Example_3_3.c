/*
* @Author: Liu Yang
* @Date:   2020-05-18 11:13:11
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 11:15:47
*/
#include<stdio.h>  //以十进制、八进制、十六进制打印数字100
int main(void)
{
	
	int x= 100;

	printf("dec = %d; octal= %o; hex = %x\n",x,x,x);
	printf("dec = %d; octal= %#o; hex = %#x\n",x,x,x );
	
	return 0;
}