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

            if(a!=0){
                checkNumber(a);
            }
        }
    }
}


/*
함수 main에서 a 값을 0으로 입력 받았을 때 일어나는 일
1. "짝수입니다." 출력 후 종료
2. "홀수입니다." 출력 후 종료
3. 아무 일도 일어나지 않고 종료
4. "잘못된 입력입니다. 다시 입력해주세요 : " 출력 후 a의 값을 재입력
*/
