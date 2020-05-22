/*
*@FileName:Example_7_7.c
*@Author: Liu Yang
*@Date:  2020/5/22 10:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 10:50
*/

#include "stdio.h"
#include "ctype.h"          //为isspace()函数提供原型
#include "stdbool.h"        //为bool、true、false提供宏定义
#define STOP '|'

int main(void)
{

    char c;         //读入字符
    char prev;      //读入的前一个字符
    long n_chars = 0l;//字符数
    int n_lines = 0;    //行数
    int n_word = 0;     //单词数
    int p_lines = 0;    //不完整的行数
    bool inword = false;//如果c在单词中，inword等于true
    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';            //用于识别完整的行
    while ((c = getchar()) != STOP)
    {
        n_chars++;          //统计字符
        if (c=='\n')
        {
            n_lines++;
        }
        if (!isspace(c) && !inword)
        {
            inword = true;  //开始一个新的单词
            n_word++;       //统计单词
        }
        if (isspace(c) && inword)
        {
            inword = false;     //达到 单词末尾
        }
        prev = c;           //保存字符的值
    }

    if (prev != '\n')
    {
        p_lines = 1;
    }
    printf("characters = %ld ,words = %d ,lines = %d,",n_chars,n_word,n_lines);
    printf("partial line = %d\n",p_lines);

    return 0;
}