/*
*@FileName:Example_16_6.c
*@Author: Liu Yang
*@Date:  2020/6/8 8:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 8:50
*/

//常量
#include <string.h>
#define LEN 32
//类型定义
struct name_st{
    char first[LEN];
    char last[LEN];
};
typedef struct name_st names;

//函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);