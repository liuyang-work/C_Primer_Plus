/*
* @Author: Liu Yang
* @Date:   2020-05-19 09:04:26
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-19 09:09:04
*/
#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	float area,circum,radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area = PI*radius*radius;
	circum = 2*PI*radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f,area = %1.2f\n",circum,area );


	
	return 0;
}