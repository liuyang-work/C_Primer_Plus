/*
*@FileName:Example_7_5.c
*@Author: Liu Yang
*@Date:  2020/5/22 10:07
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/22 10:07
*/

#include "stdio.h"         //使用嵌套if语句显示一个数的约数
#include "stdbool.h"

int main(void) {
    unsigned long num;  //带测试的数
    unsigned long div;  //可能的约数
    bool isPrime;       //素数标记

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
               isPrime = false;   //该数不是素数
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