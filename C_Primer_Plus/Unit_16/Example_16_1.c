/*
*@FileName:Example_16_1.c
*@Author: Liu Yang
*@Date:  2020/6/7 8:53
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/7 8:53
*/
//�򵥵�Ԥ����ʵ��
#include "stdio.h"
#define TWO 2       //����ʹ��ע��
#define OW "Consistency is  the last refuge of the unimagina\
tive. - Oscar Wilde"    //��б�ܰѶ�����������һ��

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