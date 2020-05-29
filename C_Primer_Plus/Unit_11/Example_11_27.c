/*
*@FileName:Example_11_27.c
*@Author: Liu Yang
*@Date:  2020/5/29 21:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 21:50
*/

char * s_gets(char * st,int n);
#include "string.h"
#include "stdio.h"
#define SIZE 40
#define TARGSIZE 7
#define LIM 5

int main(void) {
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning whit q:\n",LIM);
    while (i<LIM && s_gets(temp,SIZE)) {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else {
            strncpy(qwords[i], temp, TARGSIZE - 1);
            qwords[i][TARGSIZE - 1] = '\0';
            i++;
        }
    }

    puts("Here are the words accepted:");
    for ( i = 0; i < LIM; ++i) {
        puts(qwords[i]);
    }
    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val =  fgets(st, n, stdin);
    if (ret_val)   //¼Èret_val £¡= NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return  ret_val;
}