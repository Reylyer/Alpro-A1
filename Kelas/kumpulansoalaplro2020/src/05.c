#include <stdio.h>

int main(){
// kamus
    float s1, s2, d1, d2, Luas, Kell;
    
// Algoritma
    //input
    scanf("%f%f%f%f", &s1, &s2, &d1, &d2);
    
    //proses
    Luas = d1 * d2 /2;
    Kell = 2 * (s1 + s1);
    
    // output
    printf("%f\n%f\n", Luas, Kell);


    return 0;
}