/*
* @Author: Liu Yang
* @Date:   2020-05-18 10:22:05
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-18 10:31:15
*/
#include<stdio.h>
void butler(void);  							//函数原型声明

int main(void)
{
	printf("I will summon the butler function.\n");
	butler(); 												 //调用函数
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	
	
	return 0;
}


void butler(void){  							//定义函数
	printf("You rang,sir?\n");

}