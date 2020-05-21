/*
*@FileName:Example_6_17.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:27
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:27
*/

#include "stdio.h"
#define ROWS 6
#define CHARS 10
int main(void) {
    int row;
    char ch;


    for (row = 0;  row < ROWS ; row++) {
        for (ch = 'A'; ch <('A'+CHARS) ; ++ch) {
            printf("%c",ch);
        }
        printf("\n");

    }

    return 0;
}