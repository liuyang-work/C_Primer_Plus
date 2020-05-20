/*
*@FileName:Example_4_10.c
*@Author: Liu Yang
*@Date:  2020/5/19 上午11:38
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/19 上午11:38
*/

#include "stdio.h"
#define BLURB "Authentic imitation"
int main(void) {
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);

    return 0;
}
