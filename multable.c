
#include<stdio.h>

int main(){

    int i, j;

    for ( i = 1; i <= 9; i++){
        for ( j= 1; j <= 9; j++){
            int k = i * j;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}