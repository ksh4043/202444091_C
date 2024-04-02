#include <stdio.h>

int main(){
    int i = 1;

    while(i<=5){//조건식에 0을 제외한 양수,음수,문자 등의 값을 넣어도 True
        i++;
        printf("%d", i);
    }
}