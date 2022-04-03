/*
 * Nama Program   : gayaSentr.c
 * Deskripsi      : menghitung dan menampilkan gaya sentripetal dari benda yang bergerak melingkar
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 06, maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    float m;
    float v;
    float r;
    float F;
    
// Algoritma
    //input
    printf("Program menghitung gaya sentripetal benda yang bergerak berputar\n");
    printf("Masukan massa benda(kg): ");
    scanf("%f", &m);
    printf("Masukan kecepatan benda(m/s): ");
    scanf("%f", &v);
    printf("Masukan jarak dari pusat putaran ke benda(m): ");
    scanf("%f", &r);
    
    //proses
    F = m * v * v / r;
    
    // output
    printf("benda mengalami gaya sentripetal sebesar %f Newton", F);
    
    
    return 0;
}