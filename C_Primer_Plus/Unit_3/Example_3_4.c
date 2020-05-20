/*
* @Author: Liu Yang
* @Date:   2020-05-18 11:22:25
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 11:47:47
*/
#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;  //无符号整型
	short end = 200;   //短整型
	long big = 65537;  //长整型
	long  long verybig = 12345678908642;

	printf("un = %u  \n",un);   //格式准换需要一一对应
	printf("end = %hd \n",end );
	printf("big = %ld \n",big );
	printf("verybig = %lld \n",verybig );


	return 0;
}