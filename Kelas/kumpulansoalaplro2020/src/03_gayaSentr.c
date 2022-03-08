/*
 * Nama : Givandra Haikal Adjie
 * NIM  : 24060121130063
 * tgl pengerjaan: 06, maret 2022
**/

#include <stdio.h>

int main(){
// kamus
    float m, v, r, F;
    
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