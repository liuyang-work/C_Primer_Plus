/*
*@FileName:Example_7_5.c
*@Author: Liu Yang
*@Date:  2020/5/22 10:07
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 10:07
*/

#include "stdio.h"         //ʹ��Ƕ��if�����ʾһ������Լ��
#include "stdbool.h"

int main(void) {
    unsigned long num;  //�����Ե���
    unsigned long div;  //���ܵ�Լ��
    bool isPrime;       //�������

    printf("Please enter a integer for analysis;");
    printf("Enter q to quit.\n");
   while (scanf("%lu",&num) == 1){
       for (div = 2,isPrime = true; (div*div) <= num ; ++div)
       {
           if (num%div == 0)
           {
               if ((div*div) != 0)
               {
                   printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
               }
               else{
                   printf("%lu is divisible by %lu.\n",num,div);
               }
               isPrime = false;   //������������
           }

       }
       if (isPrime){
           printf("%lu is a prime.\n",num);
       }
       printf("Please enter another integer for analysis;");
       printf("Enter q to quit.\n");

   }
   printf("Bye!");

    return 0;
}