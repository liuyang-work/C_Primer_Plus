/*
*@FileName:Example_12_7.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:44
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:44
*/

static unsigned long int next = 1;  //����

unsigned int rand0()
{
    //����α�������ħ����ʽ
    next = next*1103515245 + 12345;
    return (unsigned int) (next/65536) %32768;
}