/*
*@FileName:Example_14_15.c
*@Author: Liu Yang
*@Date:  2020/6/5 9:04
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/5 9:04
*/
//ʹ��ö�����͵�ֵ
#include "stdio.h"
#include "string.h"     //�ṩstrcmp(),strchr()ԭ��
#include "stdbool.h"    //C99������
char *s_gets(char *st, int n);

enum spectrum{red, orange, yellow, green, blue, violet};
const char * colors[] = {"red","orange","yellow","green","blue","violet"};
#define LEN 30

int main(void) {
    char choice[LEN];
    enum spectrum color;
    bool color_is_find = false;

    puts("Enter a color(empty line to quit):");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
    {
        for (color = 0; color <= violet; ++color) {
            if (strcmp(choice,colors[color]) == 0)
            {
                color_is_find = true;
                break;
            }
        }
        if (color_is_find)
            switch (color)
            {
                case red:puts("Roses are red.");
                    break;
                case orange:puts("Poppies are orange.");
                    break;
                case yellow:puts("Sunflowers are yellow.");
                    break;
                case green:puts("Grass is green.");
                    break;
                case blue:puts("Bluebells are blue.");
                    break;
                case violet:puts("Violets are violets.");
                    break;
            }
        else
            printf("I don't know about the color %s.\n",choice);
        color_is_find = false;
        puts("Next color,please (empty line to quit):");
    }
    puts("Goodbye!");

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
