/*
*@FileName:Example.c
*@Author: Liu Yang
*@Date:  2020/5/25 12:48
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 12:48
*/

#include "stdio.h"  //与程序清单9.10一起编译
#include "Example_9_10.c"      //定义符号常量，声明函数
int main(void) {

    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT)
    {
        switch (code)
        {
            case 1:hotel_rate = HOTEL1;
                break;
            case 2:hotel_rate = HOTEL2;
                break;
            case 3:hotel_rate = HOTEL3;
                break;
            case 4:hotel_rate = HOTEL4;
                break;
            default:hotel_rate = 0.0;
                    printf("Oops!\n");
                    break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");

    return 0;
}