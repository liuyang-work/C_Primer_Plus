/*
*@FileName:Example_14_2.c
*@Author: Liu Yang
*@Date:  2020/6/3 18:13
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 18:13
*/
//�����౾�����ͼ��Ŀ¼
#include "stdio.h"
#include "string.h"
char * s_gets(char *st, int n);
#define MAXTITL 40    //��������󳤶�
#define MAXAUTL 40    //������������󳤶�
#define MAXBKS 100      //�鼮���������

struct book{        //����bookģ��
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};          //�ṹģ�����

int main(void) {
    struct book library[MAXBKS];    //book���ͽṹ������
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Please [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL
    && library[count].title[0]!= '\0')
    {
        printf("Now enter the author:\n");
        s_gets(library[count].author,MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while (getchar() != '\n')
            continue;       //����������
        if (count<MAXBKS)
            printf("Enter the next title.\n");
    }

    c

    return 0;
}

char *s_gets(char *st, int n)
{
    char * ret_val;
    char *find;

    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        find = strchr(st,'\n'); //���һ��з�
        if (find)               //�����ַ����Null
            *find = '\0';       //�ڴ˴�����һ�����ַ�
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}