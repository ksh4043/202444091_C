#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2;
    int sum, dev, mul;
    float sli;

    printf("1. ù ��° ���� �Է� : ");
    scanf("%d", &num1);

    printf("\n2. �� ��° ���� �Է� : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    dev = num1 - num2;
    mul = num1 * num2;
    sli = num1 / num2;

    printf("\n���� ��� : %d\n", sum);
    printf("���� ��� : %d\n", dev);
    printf("���� ��� : %d\n", mul);
    printf("������ ��� : %f", sli);
}