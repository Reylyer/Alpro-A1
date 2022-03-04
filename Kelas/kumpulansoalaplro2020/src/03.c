#include <stdio.h>

int main(){
// kamus
    float m, v, r, F;
    
// Algoritma
    //input
    scanf("%f%f%f", &m, &v, &r);
    
    //proses
    F = m * v * v / r;
    
    // output
    printf("%f", F);
    
    
    return 0;
}