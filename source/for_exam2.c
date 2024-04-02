#include <stdio.h>

int main(){//이중 for문
    /*for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }*/

    for (int i = 1; ; i++)  {
        if(i==1)    {
            break;
        }
        printf("*");
    }
    
}