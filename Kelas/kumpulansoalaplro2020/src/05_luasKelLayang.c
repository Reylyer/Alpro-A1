/*
 * Nama Program   : luasKelLayang.c
 * Deskripsi      : menghitung dan menampilkan luas dan keliling layang layang
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 06, maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Kell;
    
// Algoritma
    //input
    printf("Program menghitung luas dan keliling layang layang\n");
    printf("Masukan sisi satu layang layang(m): ");
    scanf("%f", &s1);
    printf("Masukan sisi dua  layang layang(m): ");
    scanf("%f", &s2);
    printf("Masukan diagonal satu layang layang(m): ");
    scanf("%f", &d1);
    printf("Masukan diagonal dua  layang layang(m): ");
    scanf("%f", &d2);
    //proses
    Luas = d1 * d2 /2;
    Kell = 2 * (s1 + s1);
    
    // output
    printf("Luas layang layang sebesar %f m persegi\n", Luas);
    printf("Sementara keliling layang layang sebesar %f m", Kell);

    return 0;
}