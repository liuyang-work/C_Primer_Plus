/*
*@FileName:Example_16_8.c
*@Author: Liu Yang
*@Date:  2020/6/8 8:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 8:50
*/
#include "stdio.h"
#include "Example_16_7.c"


int main(void) {

    names candidate;

    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this program!\n");

    return 0;
}