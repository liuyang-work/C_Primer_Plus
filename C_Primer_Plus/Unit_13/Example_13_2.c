/*
*@FileName:Example_13_2.c
*@Author: Liu Yang
*@Date:  2020/6/2 10:10
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/2 10:10
*/
//把文件压缩成原来的三分之一
#include "stdio.h"
#include "stdlib.h"   //提供exit()原型
#include "string.h"    //提供strcpy()、strcat()的原型
#define LEN 40

int main(int argc,char *argv[]) {
    FILE *in,*out;  //声明两个指向FILE的指针
    int ch;
    char name[LEN]; //储存输出的文件名
    int count = 0;

    //检查命令行参数
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    //设置输入
    if ((in = fopen(argv[1],"r")) ==NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name,argv[1],LEN-5);        //拷贝文件名
    name[LEN-5] = '\0';
    strcat(name,".red");  //在文件名后加上.red
    if ((out = fopen(name,"w")) == NULL)
    {//以写模式打开文件
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }

    //拷贝数据
    while ((ch = getc(in)) != EOF)
    {
        if (count++ % 3 ==0)
        {
            putc(ch,out);   //打印三个字符串中的第一个字符
        }
    }
    if (fclose(in) !=0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}