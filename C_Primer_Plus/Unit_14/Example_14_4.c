/*
*@FileName:Example_14_4.c
*@Author: Liu Yang
*@Date:  2020/6/4 8:24
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/4 8:24
*/
//ʹ��ָ��ṹ��ָ��
#include "stdio.h"
#define LEN 20

struct names{
    char first[LEN];
    char last[LEN];
};

struct guy{
    struct names handle;    //Ƕ�׽ṹ
    char favfood[LEN];
    char job[LEN];
    float income;
};
int main(void) {

    struct guy fellow[2] = {{   //��ʼ��һ������
            {"Even", "Villard"},
            "grilled salmon",
            "personality coach",
            68122.00
    },
    {
        { "Rodney", "Swillbelly" },
        "tripe",
                "tabloid editor",
                432400.00
    }
};
    struct guy *him;        //����һ��ָ��ṹ��ָ��

    printf("address #1: %p #2: %p\n",&fellow[0],&fellow[1]);
    him = &fellow[0];   //���߱�������ָ��ָ��δ�
    printf("pointer #1: %p #2: %p\n",him,him+1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n",him->income,(*him).income);
    him++;
    printf("him->favfood is %s: him->handle.last is %s\n",him->favfood,him->handle.last);

    return 0;
}