#include <stdio.h>

int main(){
// kamus
    int i, j, N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    for(i = 0; i<N; i++){
        for(j = 0; j< i; j++) printf(" ");
        for(j = i%2? i-1: i; j < 2*N - i - 1; j++) j%2? printf(" ") : printf("*");

        printf("\n");
    }


    return 0;
}