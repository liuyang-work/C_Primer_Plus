/*
* @Author: Liu Yang
* @Date:   2020-05-18 13:00:25
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 13:23:49
*/
#include<stdio.h>
int main(void)         //一多种方式显示float类型的值
{
	float about = 332000.0;
	double abet  = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n",about,about );
	printf("And it's %a hexadecimal,powers of 2 notation\n",about );
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n",dip,dip);
	
	
	return 0;
}