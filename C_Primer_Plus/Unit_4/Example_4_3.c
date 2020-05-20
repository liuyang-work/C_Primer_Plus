/*
* @Author: Liu Yang
* @Date:   2020-05-19 08:35:20
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-19 08:45:52
*/
#include<stdio.h>
#include <string.h>
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

	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
	printf("The phrase of prasise has %zd letters.\n",strlen(PRAISE) );
	printf("and occupies %zd memory cells.\n",sizeof(PRAISE) );


	return 0;
}