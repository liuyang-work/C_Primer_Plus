/*
* @Author: Liu Yang
* @Date:   2020-05-19 08:09:37
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-19 08:22:45
*/
#include<stdio.h>
#include<string.h>        //提供函数strlen()原型
#define DENSITY 62.4           //人体密度
int main(void)
{
	float weight,volume;
	int size ,letters;
	char name[40];    //name 是一个可以容纳40个字符的数组

	printf("Hi,What's your first name ?\n");
	scanf("%s",name);
	printf("%s,What's your weight in pounds?\n", name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight/DENSITY;
	printf("Well,%s your volume is %2.2f cubic feet.\n",name,volume );\
	printf("Also,your first name has %d letters\n",letters );
	printf("and we have %d byte to store it.\n",size );

	
	return 0;
}