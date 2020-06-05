/*
*@FileName:Example_14_16.c
*@Author: Liu Yang
*@Date:  2020/6/5 10:46
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/5 10:46
*/
//ʹ�ú���ָ��
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#define LEN 81
char *s_gets(char *st, int n);
char showmenu(void );
void eatline(void );        //��ȡ����ĩβ
void show(void (*fp)(char *),char * str);
void Toupper(char *);       //���ַ���ת��Ϊ��д
void Tolower(char *);       //���ַ���ת��ΪСд
void Transpose(char *);      //��Сдת��
void Dummy(char *);          //�������ַ���
int main(void) {
    char line[LEN];
    char copy[LEN];
    char choice;
    void (*pfun)(char *);//����һ������ָ�룬��ָ��ĺ�������char*���͵Ĳ������޷���ֵ

    puts("Enter a string(empty line to quit):");
    while (s_gets(line,LEN) != NULL && line[0] != '\0') {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice)     //switch�������ָ��
            {
                case 'u':
                    pfun = Toupper;
                    break;
                case 'l':
                    pfun = Tolower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
            }
            strcpy(copy, line);      //Ϊshow������������һ��
            show(pfun, copy);        //�����û���ѡ��ʹ���ض��ĺ���
        }
        puts("Enter a string(empty line to quit):");
    }
    puts("Bye!");

    return 0;
}

char showmenu(void )
{
    char ans;
    puts("Enter menu choice:");
    puts("u)  uppercase        l)lowercase");
    puts("t)  transposed case  o)original case");
    puts("n)  nexting string");
    ans = getchar();        //��ȡ�û�����
    ans = tolower(ans);      //ת��ΪСд
    eatline();                //����������
    while (strchr("ulton",ans) == NULL)
    {
        puts("Please enter a u,l,t,o,or n:");
        ans = tolower(getchar());
        eatline();
    }
    return ans;
}
void eatline(void )      //��ȡֵ��ĩβ
{
    while (getchar()!= '\n')
        continue;
}

void Toupper(char * str)       //���ַ���ת��Ϊ��д
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}
void Tolower(char *str)      //���ַ���ת��ΪСд
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}
void Transpose(char *str)      //��Сдת��
{
    while (*str)
    {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}
void Dummy(char *str)
{
    //�������ַ���
}

void show(void (*fp)(char *),char * str)
{
    (*fp)(str);         //���û�ѡ���ĺ���������str
    puts(str);          //��ʾ���
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
