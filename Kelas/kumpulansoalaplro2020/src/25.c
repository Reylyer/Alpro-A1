#include <stdio.h>

int main(){
// kamus
    int i, j, N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    for(i = 1; i<=N; i++){
        for(j = 0; j< i; j++) printf("*");
        printf("\n");
    }
    for(i = N - 1; i > 0; i--){
        for(j = i; j > 0; j--) printf("*");
        printf("\n");
    }

    return 0;
}