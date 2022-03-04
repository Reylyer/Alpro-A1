#include <stdio.h>

int main(){
// kamus
    int i, j, N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    for(i = N; i > 0; i--){
        for(j = i; j > 0; j--) printf("*");
        printf("\n");
    }

    return 0;
}