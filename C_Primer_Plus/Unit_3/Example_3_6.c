/*
* @Author: Liu Yang
* @Date:   2020-05-18 12:49:16
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 12:57:07
*/
#include<stdio.h>
#include <inttypes.h>  //支持可移植类型
int main(void)
{
	int32_t me32;   //这是一个32位有符号整型变量


	me32 = 45933945;
	printf("First ,assume int32_t is int:");
	printf("me32=%d\n",me32 );
	printf("Next, let's not make any assumptions.\n");
	printf("Instead,use a \"macro\" from inttypes.h:");
	printf("me32 = %d \n",me32 );



	return 0;
}