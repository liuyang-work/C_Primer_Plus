/*
*@FileName:Example_9_11.c
*@Author: Liu Yang
*@Date:  2020/5/25 12:58
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/25 12:58
*/

#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "*****************************************"

//��ʾѡ���б�
int menu(void );

//����Ԥ������
int getnights(void );

//���ݷ��ʡ���ס�����������
//����ʾ���

void showprice(double rate,int night);