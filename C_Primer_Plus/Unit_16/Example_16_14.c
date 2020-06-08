/*
*@FileName:Example_16_14.c
*@Author: Liu Yang
*@Date:  2020/6/8 14:54
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/8 14:54
*/
//��ֱ������ת��Ϊ������
#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180/(4 * atan(1)))

typedef struct polar_v{
    double magnitude;
    double angle;
}Polar_V;
typedef struct rect_y{
    double x;
    double y;
}Rect_V;

Polar_V rect_to_polar(Rect_V);

int main(void) {

    Rect_V input;
    Polar_V result;

    puts("Enter x and y coordinates; enter q to quit:");
    while (scanf("%Lf %Lf",&input.x,&input.y) == 2)
    {
        result = rect_to_polar(input);
        printf("mangnitude = %0.2f, angle = %0.2f\n",result.magnitude,result.angle);
    }
    puts("Bye.");

    return 0;
}

Polar_V rect_to_polar(Rect_V rv)
{
    Polar_V pv;

    pv.magnitude = sqrt(rv.x*rv.x+rv.y*rv.y);
    if (pv.magnitude == 0)
        pv.angle = 0.0;
    else
        pv.angle = RAD_TO_DEG * atan2(rv.y,rv.x);
    return pv;
}