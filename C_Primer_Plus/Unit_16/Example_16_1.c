/*
*@FileName:Example_16_1.c
*@Author: Liu Yang
*@Date:  2020/6/7 8:53
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/7 8:53
*/
//简单的预处理实例
#include "stdio.h"
#define TWO 2       //可以使用注释
#define OW "Consistency is  the last refuge of the unimagina\
tive. - Oscar Wilde"    //反斜杠把定义延续到下一行

#define FOUR TWO*TWO
#define PX printf("X is %d.\n",x)
#define FT  "X is %d.\n"
int main(void) {
    int x = TWO;

    PX;
    x=FOUR;
    printf(FT,x);
    printf("%s.\n",OW);
    printf("TWO: OW\n");
    getchar();
    return 0;
}