/*
*@FileName:Example_12_3.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:06
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:06
*/

#include "stdio.h"
void trystat(void );
int main(void) {
    int count;

    for (count = 1; count <= 3; ++count) {
        printf("Here comes interation %d:\n",count);
        trystat();
    }

    return 0;
}

void trystat(void )
{
    int fade = 1;
    static int stay = 1;

    printf("fade  = %d and stay = %d\n",fade++,stay++);

}