/*
*@FileName:Example_11_5.c
*@Author: Liu Yang
*@Date:  2020/5/29 10:54
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/29 10:54
*/
//Ö¸ÕëºÍ×Ö·û´®
#include "stdio.h"
int main(void) {
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s\n",copy);
    printf("mesg = %s; &mesg = %p; value = %p\n",mesg,&mesg,mesg);
    printf("copy = %s; &copy = %p; value = %p\n",copy,&copy,copy);


    return 0;
}