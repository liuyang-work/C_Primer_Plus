/*
*@FileName:Example_13_3.c
*@Author: Liu Yang
*@Date:  2020/6/2 11:11
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/2 11:11
*/
//使用fprintf()、fscanf()、rewind()函数
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define MAX 41
int main(void)
{
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy","a+")) == NULL)
    {
        fprintf(stderr,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter words to add to the file; press the #");
    puts("Key at the beginning of a line to terminate.");
    while ((fscanf(stdin,"%s",word) == 1) && words[0] != '#')
        fprintf(fp,"%s\n",words);
    puts("File contents:");
    rewind(fp);         //返回到文件开始处
    while (fscanf(fp,"%s",words) == 1)
        puts(words);
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");

    return 0;
}