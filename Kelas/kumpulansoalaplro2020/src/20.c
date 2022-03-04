#include <stdio.h>

int main(){
// kamus
    int N, i, sum=0;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    // proses
    for(i = 1; i <N; i++){
        if(!(N % i)) sum+=i;
    }

    // output
    if(sum == N) printf("N=%d adalah bilangan sempurna", N);
    else printf("N=%d adalah bukan bilangan sempurna", N);


    return 0;
}