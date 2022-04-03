/*
 * Nama Program   : 14_HargaDiskon.c
 * Deskripsi      : menghitung besarnya harga setelah diberikan diskon
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/

#include <stdio.h>
 
int main(){
// kamus
    char jenis;
    int harga;
    float pengali;
    
// Algoritma
    //input
    scanf("%c %d", &jenis, &harga);
    
    //proses
    pengali = jenis == 'A' ? 0.1 : jenis == 'B' ? 0.15 : 0.2;
    
    // output
    printf("Jenis=%c, Harga=Rp. %d,- sehingga harga nya sebesar Rp. %d,-", jenis, harga, (int)(harga - harga * pengali));
    
    
    return 0;
}