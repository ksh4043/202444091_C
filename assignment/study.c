#include <stdio.h>

void checkNumber(int num){
    if(num % 2 == 0){
        printf("짝수입니다.");
    }else{
        printf("홀수입니다.");
    }
}

int main(){

    int a;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &a);

    if(a!=0){
        checkNumber(a);
    }else{
        while(a==0){
            printf("잘못된 입력입니다. 다시 입력해주세요 : ");
            scanf("%d", &a);

            if(____){
                checkNumber(a);
            }
        }
    }
}


/*
빈칸에 들어갈 식
1. a!=0
2. a>=0
3. a==0
4. a++
*/
