/*
*@FileName:Example_12_9.c
*@Author: Liu Yang
*@Date:  2020/6/1 11:50
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/1 11:50
*/

static unsigned long int next = 1;  //种子

int rand1(void )
{
    //生成伪随机数的魔术公式
    next = next*1103515245 + 12345;
    return (unsigned int) (next/65536) %32768;
}

void srand1(unsigned int seed)
{
    next = seed;
}