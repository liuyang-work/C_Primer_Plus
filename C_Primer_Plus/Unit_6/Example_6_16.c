/*
*@FileName:Example_6_16.c
*@Author: Liu Yang
*@Date:  2020/5/21 10:23
*@Email:liuyang__work@163.com
*@Last Modified time: 2020/5/21 10:23
*/


int main(void) {
    const int secret_code = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club,\n ");
    printf("please enter the secret code number:");
    scanf("%d",&code_entered);

    while (code_entered!=secret_code) {
        printf("To enter the triskaidekaphobia therapy club,\n ");
        printf("please enter the secret code number:");
        scanf("%d",&code_entered);
    }
    printf("Congratulations ! You are cured!\n");


    return 0;
}