/*
* @Author: Liu Yang
* @Date:   2020-05-18 11:07:37
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 11:15:43
*/
#include<stdio.h>   //演示printf()函数 的一些特性
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right:");
	printf("%d minus %d is %d \n",ten,two,ten - two );
	printf("Doing it wrong:");
	printf("%d minus %d is %d \n",ten,two,ten - two );
	
	return 0;
}