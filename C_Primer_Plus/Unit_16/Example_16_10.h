/*
*@FileName:Example_16_10.c
*@Author: Liu Yang
*@Date:  2020/6/8 10:00
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 10:00
*/
#ifndef NAME_H_
#define NAME_H_

//��ʾ����
#define LEN 32
//���Ͷ���
struct name_st{
    char first[LEN];
    char last[LEN];
};
//���Ͷ���
typedef struct name_st names;

//����ԭ��
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif