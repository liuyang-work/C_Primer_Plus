/*
*@FileName:Example_6_9.c
*@Author: Liu Yang
*@Date:  2020/5/21 9:21
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 9:21
*/


int main(void) {
    long num;
    long sum = 0L; //��sum��ʼ��Ϊ0
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):\n");
    input_is_good = (scanf("%ld",&num)==1);
    while (input_is_good){        //��==����ʾ����
        sum = sum +num;
        printf("Please enter the next integer (q to quit) :\n");
        input_is_good = scanf("%ld",&num);
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;
}