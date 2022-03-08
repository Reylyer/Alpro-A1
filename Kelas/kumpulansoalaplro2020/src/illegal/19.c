#include <stdio.h>
#include <math.h>

int main(){
// kamus
    int N, i, prima = 1;
    
// Algoritma
    //input
    scanf("%d", &N);

    // proses
    for(i = 2; i <=sqrt(N); i++){
        if(!(N % i)){
            prima = 0;
        }
    }

    // output
    if(prima) printf("N=%d adalah bilangan prima", N);
    else printf("N=%d adalah bukan bilangan prima", N);
    
    
    return 0;
}