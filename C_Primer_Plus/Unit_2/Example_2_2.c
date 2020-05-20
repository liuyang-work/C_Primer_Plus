/*
* @Author: Liu Yang
* @Date:   2020-05-18 10:16:54
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 10:25:09
*/
#include<stdio.h>      
int main(void)			//把两英寻尺转换成英尺
{
	int feet,fathoms;

	fathoms=2;
	feet=6*fathoms;

	printf("There are %d feet in %d fathoms!\n",feet,fathoms );
	printf("Yes ,I said %d feet!\n",6*fathoms );
	
	
	return 0;
}