/*
*@FileName:Example_4_15.c
*@Author: Liu Yang
*@Date:  2020/5/19 下午12:52
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 下午12:52
*/

#include "stdio.h"
int main(void) {
    int ages;  //变量
    float assets;
    char pet[30];  //字符数组,用于存储字符串

    printf("Enter you age,assets,and favorite pet:\n");
    scanf("%d %f",&ages,&assets);  //这里要使用&
    scanf("%s",pet);  //字符数组不使用&

    printf("%d $%.2f %s\n",ages,assets,pet);

    return 0;
}
