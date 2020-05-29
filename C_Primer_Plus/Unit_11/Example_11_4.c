/*
*@FileName:Example_11_4.c
*@Author: Liu Yang
*@Date:  2020/5/29 10:39
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 10:39
*/
//指针数组，字符串数组
#include "stdio.h"
#define SLEN 40
#define LIM 5
int main(void) {
    const char *mytalents[LIM] = {
            "Adding number swiftly",
            "Multiplying accurately",
            "Stashing data",
            "Following instructions to the letter",
            "Understand the C language"
    };

    char yourtalents[LIM][SLEN] = {
            "Walking in a straight line",
            "Sleeping",
            "Watching television",
            "Mailing letters",
            "Reading email"
    };


    puts("Let's compare talents.");
    printf("%-36s %-25s\n","My talents","Your talents");
    for (int i = 0; i < LIM; ++i) {
        printf("%-36s %-25s\n",mytalents[i],yourtalents[i]);
    }
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",sizeof(mytalents),sizeof(yourtalents));



    return 0;
}