/*
*@FileName:Example_14_11.c
*@Author: Liu Yang
*@Date:  2020/6/4 10:23
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 10:23
*/

#include "stdio.h"
#define MAXTITL 41
#define MACAUTL 31

struct book{        //结构模板，标记是book
    char title[MAXTITL];
    char author[MACAUTL];
    float value;
};

int main(void) {
    struct book readfirst;
    int score;

    printf("Enter test score:");
    scanf("%d",&score);

    if (score > 84)
    readfirst = (struct book){
        "Crime and Punishment","Fyodor Dostoyevsky",11.25
    };
    else
    {
        readfirst = (struct book){
                "Mr. Bouncy's Nice Hat","Frem Winsome",5.99
        };
    }

    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n",readfirst.title,readfirst.author,readfirst
    .value);

    return 0;
}