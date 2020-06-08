/*
*@FileName:Example_16_15.c
*@Author: Liu Yang
*@Date:  2020/6/8 15:27
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 15:27
*/
//定义泛型宏
#include "stdio.h"
#include "math.h"
#define RAD_TO_DEG (180/(4*atan(1)))

//泛型平方根函数
#define SQRT(X) _Generic((X),long double:sqrtl,default:sqrt,float :sqrtf)(X)

//泛型正弦函数，角度的单位为度
#define SIN(X) _Generic((X),long double : sinl((X)/RAD_TO_DEG),default:sin((X)/RAD_TO_DEG),float:sinf((X)/RAD_TO_DEG))

int main(void) {

    float x = 45.0f;
    double xx = 45.0;
    long double xxx = 45.0L;

     double y = sqrt(x);
     double yy = sqrt(xx);
     double yyy = sqrt(xxx);

    printf("%.17f\n",y);               //匹配float
    printf("%.17f\n",yy);              //匹配default
    printf("%.17f\n",yyy);             //匹配long double
    int i = 45;
    yy = SQRT(i);                       //匹配default
    printf("%.17f\n",yy);
    yyy = SIN(yyy);                     //匹配long double
    printf("%.17f\n",yyy);
    getchar();

    return 0;
}