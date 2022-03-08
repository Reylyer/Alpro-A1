/*
 * Nama : Givandra Haikal Adjie
 * NIM  : 24060121130063
 * tgl pengerjaan: 06, maret 2022
**/

#include <stdio.h>

int main(){
// kamus
    float r, Vb, Vk;
    const float PHI = 3.14159;

// Algoritma
    //input
    printf("Program menghitung volume bola dan kerucut\n");
    printf("Masukkan jari-jari(m): ");
    scanf("%f", &r);
    
    //proses
    Vb = 4/3. * PHI * r * r * r;
    Vk = Vb / 2;
    
    // output
    printf("Volume bola sebesar %f m kubik\n", Vb);
    printf("Sementara volume kerucut sebesar %f m kubik", Vk);
    
    
    return 0;
}