/*
*@FileName:Example_13_6.c
*@Author: Liu Yang
*@Date:  2020/6/3 11:30
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/6/3 11:30
*/

//用二进制I/O进行随机访问
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

    //创建一组double类型的值
    for (i = 0; i < ARSIZE; ++i) {
        numbers[i] = 100.0*i+1.0/(i+1);
    }
    //尝试打开文件
    if ((iofile = fopen(file,"wb")) == NULL)
    {
        fprintf(stderr,"Couldn't open %s for output.\n",file);
        exit(EXIT_FAILURE);
    }
    //以二进制格式把数组写入文件
    fwrite(numbers,sizeof(double ),ARSIZE,iofile);
    fclose(iofile);
    if ((iofile = fopen(file,"rb")) == NULL)
    {
        fprintf(stderr,"Couldn't opeen %s for random access.\n",file);
        exit(EXIT_FAILURE);
    }
    //从文件中读取选定内容
    printf("Enter an index int the range 0-%d.\n",ARSIZE-1);
    while (scanf("%d",&i) == 1 && i>=0 && i<ARSIZE)
    {
        pos = (long) i*sizeof(double );  //计算偏移量
        fseek(iofile,pos,SEEK_SET);
        fread(&value,sizeof(double),1,iofile);
        printf("The value there is %lf.\n",value);
        printf("Next index(out of range to quit):\n");
    }

    //完成
    fclose(iofile);
    puts("Bye!");

    return 0;
}