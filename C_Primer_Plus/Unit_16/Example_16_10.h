/*
*@FileName:Example_16_10.c
*@Author: Liu Yang
*@Date:  2020/6/8 10:00
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 10:00
*/
#ifndef NAME_H_
#define NAME_H_

//明示常量
#define LEN 32
//类型定义
struct name_st{
    char first[LEN];
    char last[LEN];
};
//类型定义
typedef struct name_st names;

//函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif