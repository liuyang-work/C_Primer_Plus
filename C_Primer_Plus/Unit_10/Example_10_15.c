/*
*@FileName:Example_10_15.c
*@Author: Liu Yang
*@Date:  2020/5/27 10:36
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/27 10:36
*/

#include "stdio.h"
int main(void) {
    int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};

    printf("zippo = %p, zippo+1 = %p\n",zippo,zippo+1);
    printf("zippo[0] = %p, zippo[0]+1 = %pp\n",zippo[0],zippo[0]+1);
    printf("*zippo = %p, *zippo+1 = %p\n",*zippo,*zippo+1);
    printf("zippo[0][0] = %d\n",zippo[0][0]);
    printf("   *zippo = %d\n",*zippo[0]);
    printf("         **zippo = %d\n",**zippo);
    printf("      zippo[2][1] = %d\n",zippo[2][1]);
    printf("*(*(zippo+2)+1) = %d\n",*(*(zippo+2)+1));



    return 0;
}