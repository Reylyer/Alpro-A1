/*
 * Nama Program   : volBolaKerct.c
 * Deskripsi      : menghitung dan menampilkan volume bola dan volume kerucut
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 06, maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    float r;
    float Vb;
    float Vk;
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