#include <stdio.h>

int main(){
// kamus
    float v0, t, a, S;
    
// Algoritma
    //input
    printf("Masukan v0 : ");
    scanf("%f", &v0);
    printf("Masukan t : ");
    scanf("%f", &t);
    printf("Masukan a : ");
    scanf("%f", &a);
    
    //proses
    S = v0 * t + a*t*t/2;
    
    // output
    printf("Jarak yang ditempuh adalah: %f", S);
    
    
    return 0;
}