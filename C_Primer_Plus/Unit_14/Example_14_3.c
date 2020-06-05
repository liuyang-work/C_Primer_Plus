/*
*@FileName:Example_14_3.c
*@Author: Liu Yang
*@Date:  2020/6/3 19:49
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 19:49
*/
#include "stdio.h"
#define LEN 20
const char * msgs[5] ={
        "    Thank you for the woderful evening,",
        "Your certaainly prove that a",
        "is a special kind  of guy. We must get together ",
        "over a delicious",
        "and have a few laughs"
};
//第一个结构
struct names{
    char first[LEN];
    char last[LEN];
};
//第二个结构
struct guy{
    struct names handle;    //嵌套结构
    char favfood[LEN];
    char job[LEN];
    float income;
};


int main(void) {
    struct guy fellow = {   //初始化一个变量
            {"Even","Villard"},
            "grilled salmon",
            "personality coach",
            68122.00
    };

    printf("Dear %s, \n\n",fellow.handle.first);
    printf("%s%s.\n",msgs[0],fellow.handle.first);
    printf("%s%s.\n",msgs[1],fellow.job);
    printf("%s\n",msgs[2]);
    printf("%s%s%s",msgs[3],fellow.favfood,msgs[4]);
    if (fellow.income>150000.0)
        puts("!!");
    else if (fellow.income>75000.0)

        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n"," ","See you soon,");
    printf("%40s%s\n"," ","Shalala");

    return 0;
}