#include <stdio.h>

int main(){
    unsigned short a, b, result;

    printf("unsigned short range : 0 ~ 65,535\n");
    printf("first number scan : ");
    scanf("%hu", &a);
    printf("second number scan : ");
    scanf("%hu", &b);

    result = a - b;
    printf("result : %hu - %hu = %hu\n", a, b, result);
    return 0;
}