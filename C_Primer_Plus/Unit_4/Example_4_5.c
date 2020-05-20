/*
* @Author: Liu Yang
* @Date:   2020-05-19 09:16:19
* @Last Modified by:   Liu Yang
* @Last Modified time: 2020-05-19 09:22:45
*/
#include"stdio.h"
#include "limits.h"   //整型限制
#include "float.h"    //浮点型限制

int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggist int :%d\n",INT_MAX );
	printf("Smallest long long :%lld\n",LLONG_MAX );
	printf("One byte = %d bit on this system.\n",CHAR_BIT );
	printf("Largest double :%e\n",DBL_MAX );
	printf("Smallest normal float:%e\n",FLT_MIN);
	printf("float precision = %d digits\n",FLT_DIG );
	printf("float epsilon = %e\n",FLT_EPSILON );


	return 0;
}