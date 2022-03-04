#include <stdio.h>

int main(){
// kamus
    int N, i;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    printf("N=%d, faktor bilangannya adalah 1");

    for(i = 2; i <N; i++){
        if(!(N % i)) printf(", %d", i);
    }
    if(N != 1) printf(" dan %d", N);

    
    
    return 0;
}