/*
*@FileName:Example_13_6.c
*@Author: Liu Yang
*@Date:  2020/6/3 11:30
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 11:30
*/

//�ö�����I/O�����������
#include "stdio.h"
#include "stdlib.h"
#define ARSIZE 1000

int main(void) {
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;

    //����һ��double���͵�ֵ
    for (i = 0; i < ARSIZE; ++i) {
        numbers[i] = 100.0*i+1.0/(i+1);
    }
    //���Դ��ļ�
    if ((iofile = fopen(file,"wb")) == NULL)
    {
        fprintf(stderr,"Couldn't open %s for output.\n",file);
        exit(EXIT_FAILURE);
    }
    //�Զ����Ƹ�ʽ������д���ļ�
    fwrite(numbers,sizeof(double ),ARSIZE,iofile);
    fclose(iofile);
    if ((iofile = fopen(file,"rb")) == NULL)
    {
        fprintf(stderr,"Couldn't opeen %s for random access.\n",file);
        exit(EXIT_FAILURE);
    }
    //���ļ��ж�ȡѡ������
    printf("Enter an index int the range 0-%d.\n",ARSIZE-1);
    while (scanf("%d",&i) == 1 && i>=0 && i<ARSIZE)
    {
        pos = (long) i*sizeof(double );  //����ƫ����
        fseek(iofile,pos,SEEK_SET);
        fread(&value,sizeof(double),1,iofile);
        printf("The value there is %lf.\n",value);
        printf("Next index(out of range to quit):\n");
    }

    //���
    fclose(iofile);
    puts("Bye!");

    return 0;
}