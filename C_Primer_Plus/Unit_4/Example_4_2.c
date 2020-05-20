/*
* @Author: Liu Yang
* @Date:   2020-05-19 08:23:02
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-19 08:33:13
*/
#include<stdio.h>
#define PRAISE "You are an extroaordinary being."


int main(void)
{
	char name[40];
	

	printf("What's your name?\n");
	scanf("%s",name);

	/*/*int size;
	size = strlen(name);
	printf("the name's size is %d\n",a );*/
	printf("Hello %s,%s\n",name,PRAISE );
	
	return 0;
}