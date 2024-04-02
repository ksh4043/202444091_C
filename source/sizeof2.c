#include <stdio.h>

int main(){
    short num1;
    int num2;
    long num3;
    long long num4;

    printf("1.short형 변수 : %d바이트\n", sizeof(num1));
    printf("2.int형 변수 : %d바이트\n", sizeof(num2));
    printf("3.long형 변수 : %d바이트\n", sizeof(num3));
    printf("4.long long형 변수 : %d바이트\n", sizeof(num4));
    printf("5.short형 변수 : %d비트\n", sizeof(num1)*8);
    printf("6.int형 변수 : %d비트\n", sizeof(num2)*8);
    printf("7.long형 변수 : %d비트\n", sizeof(num3)*8);
    printf("8.long long형 변수 : %d비트\n", sizeof(num4)*8);

    return 0;
}