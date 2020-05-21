/*
*@FileName:Example_6_18.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:27
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:27
*/

#include "stdio.h"
int main(void) {
    const int ROWS = 6;
    const int CHARS = 6;
    int  row;
    char ch;

    for (row = 0; row < ROWS; ++row) {
        for (ch = ('A'+row); ch <('A'+CHARS) ; ++ch) {
            printf("%c",ch);
        }
        printf("\n");
    }


    return 0;
}