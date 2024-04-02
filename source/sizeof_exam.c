#include <stdio.h>

int main(){
    char s[10] = {'H','E','L','L','O'};//배열의 크기를 10으로 지정하고 선언했기 때문에 배열에 저장한 값의 크기와 무관하게 결과는 10
    printf("%d", sizeof(s));//sizeof 연산자 : 데이터의 크기를 반환 ex, 문자형 자료 = 1, 정수형 자료 = 4....
}