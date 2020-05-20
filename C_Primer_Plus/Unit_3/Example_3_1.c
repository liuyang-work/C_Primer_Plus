/*
* @Author: Liu Yang
* @Date:   2020-05-18 10:46:09
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 10:54:14
*/
#include<stdio.h>
int main(void)
{
	float weight;  //你的体重
	float value;  	//相等重量的白金价值

	printf("Are you worth you weight int platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

		//获取用户的输入
	scanf("%f",&weight);

	value = 1700.0*weight*14.5833;//根据转换率计算价值

	printf("Your weight in platinum is worth $%.2f.\n",value );
	printf("You are esaily worth that! If platinum price drop! \n");
	printf("eat more to maintain your value\n");

	
	return 0;
}