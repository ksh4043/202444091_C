#include <stdio.h>

int main(){
int num = 1;
int sum = 0;

while(num<=10){
    sum+=num;
    num++;
}

printf("1���� 10������ �� = %d\nwhile���� ���� ���� num�� �� = %d", sum, num);

    return 0;
}