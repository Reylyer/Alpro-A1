/*
 * Nama : Givandra Haikal Adjie
 * NIM  : 24060121130063
 * tgl pengerjaan: 06, maret 2022
**/

#include <stdio.h>

int main(){
// kamus
    float v0;
    float t;
    float a;
    float S;
    
// Algoritma
    //input
    printf("Program menghitung jarak dari GLBB\n");
    printf("Masukan kecepatan awal(m/s): ");
    scanf("%f", &v0);
    printf("Masukan waktu(s): ");
    scanf("%f", &t);
    printf("Masukan percepatan(m/s^2): ");
    scanf("%f", &a);
    
    //proses
    S = v0 * t + a*t*t/2;
    
    // output
    printf("Jarak yang ditempuh adalah: %f m", S);
    
    
    return 0;
} 