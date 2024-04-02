#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2;
    int sum, dev, mul;
    float sli;

    printf("1. Ã¹ ¹øÂ° Á¤¼ö ÀÔ·Â : ");
    scanf("%d", &num1);

    printf("\n2. µÎ ¹øÂ° Á¤¼ö ÀÔ·Â : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    dev = num1 - num2;
    mul = num1 * num2;
    sli = num1 / num2;

    printf("\nµ¡¼À °á°ú : %d\n", sum);
    printf("»¬¼À °á°ú : %d\n", dev);
    printf("°ö¼À °á°ú : %d\n", mul);
    printf("³ª´°¼À °á°ú : %f", sli);
}