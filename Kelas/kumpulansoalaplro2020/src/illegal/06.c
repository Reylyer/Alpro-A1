#include <stdio.h>

int main(){
// kamus
    int N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses
    if(N%2){ // ganjil
        N += 2;
        if(N%3) N+=1; // bukan kelipatan 3 kalau + 2
        else N+=4;
    } else {
        N += 3;
        if(N%5) N += 2; // 
        else N += 5;
    }
    
    // case num 2
    // 2 + 3 = 5
    // 5 ? += 5
    // 10

    // case num 4
    // 4 + 3 = 7
    // 7 ? += 2
    // 9

    // case num 3
    // 3 + 2 = 5
    // 5 ? += 1
    // 6

    // case num 1
    // 1 + 2 = 3
    // 3 ? += 4
    // 7

    // output
    printf("%d", N);
    
    
    return 0;
}