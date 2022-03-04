#include <stdio.h>

int main(){
// kamus
    int i, j, N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    for(i = 1; i<=N; i++){
        for(j = 0; j< i*(i+1)/2; j++) printf("*");
        printf("\n");
    }

    return 0;
}