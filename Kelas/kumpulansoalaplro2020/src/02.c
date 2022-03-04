#include <stdio.h>

int main(){
// kamus
    float v0, t, y;
    const float g = 9.8;
    
// Algoritma
    //input
    scanf("%f%f", &v0, &t);

    // proses
    y = v0 * t - g*t*t/2;
    
    // output
    printf("%f", y);
    
    
    return 0;
}