/*
 * Nama Program   : jarakPBola.c
 * Deskripsi      : menghitung dan menampilkan jarak yang ditempuh benda yang mengalami gerak parabola
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 06, maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    float v0;
    float t;
    float y;
    const float g = 9.8;
    
// Algoritma
    //input
    printf("Program menghitung ketinggian benda dilempar vertikal\n");
    printf("Masukan kecepatan awal(m/s): ");
    scanf("%f", &v0);
    printf("Masukan t waktu setelah diluncurkan(s): ");
    scanf("%f", &t);

    // proses
    y = v0 * t - g*t*t/2;
    
    // output
    printf("benda berada di ketinggian %f m", y);
    
    
    return 0;
}