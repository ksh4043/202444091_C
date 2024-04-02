#include <stdio.h>

int main(){
    int cnt;
    int ddd;

    printf("알파벳 대문자가 출력됩니다. \n");

    for(cnt = 65; cnt <= 90; cnt++){
        printf(" %c", cnt);
    }//for문에서 변수 선언을 같이 할 수 있음.

    printf("\n알파벳 소문자가 출력됩니다. \n");

    for(ddd = 97; ddd <= 122; ddd++){
        printf(" %c", ddd);
    }//for문에서 변수 선언을 같이 할 수 있음.
}