#include <stdio.h>

int main(){
// kamus
    float r, Vb, Vk;
    const PHI = 3.1415;

// Algoritma
    //input
    scanf("%f", &r);
    
    //proses
    Vb = 4/3 * PHI * r * r * r;
    Vk = Vb / 2;
    
    // output
    printf("%f\n%f\n", Vb, Vk);
    
    return 0;
}