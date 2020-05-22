/*
*@FileName:Example_7_11.c
*@Author: Liu Yang
*@Date:  2020/5/22 11:56
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 11:56
*/

#include "stdio.h"
#include "ctype.h"
int main(void) {
    char ch;

    printf("Give me a letter of the alphabet,and i will give");
    printf("an animal name\nbeginning whit that letter.\n");
    printf("Please type in a letter;type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
        {
            continue;
        }
        if (islower(ch))    //只接受小写字母
        {
            switch (ch)
            {
                case 'a':   //以下输出内容不精确，明白即可
                    printf("argali,a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa,a wild pig of Asia\n");
                    break;
                case 'c':
                    printf("coati,a wild sheep of Asia\n");
                    break;
                case 'd':
                    printf("argali,a wild sheep of Asia\n");
                    break;
                case 'e':
                    printf("argali,a wild sheep of Asia\n");
                    break;
                case 'f':
                    printf("argali,a wild sheep of Asia\n");
                    break;
                default:
                    printf("That's a stumper!\n");
            }
        }
        else
        {
            printf("I recognize only lowercase letters.\n");
        }
        while (getchar()!='\n')
        {
            continue;
        }
        printf("Please enter another letter or a #.\n");
    }
    printf("Bye");

    return 0;
}