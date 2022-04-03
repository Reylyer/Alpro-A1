/*
 * Nama Program   : 15_UpahKerja.c
 * Deskripsi      : menghitung upah yang diterima dengan menggunakan aturan khusus
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
#include <stdio.h>
 
int main(){
// kamus
    int golongan;
    int jam_kerja;
    int upah;
    int tgolongan[] = {1000, 1500, 2000, 2500};
// Algoritma
    //input
    scanf("%d %d", &golongan, &jam_kerja);
    
    //proses
    upah = jam_kerja > 40 ? (int)(tgolongan[golongan-1]*(40 + (jam_kerja-40)*1.5)) : tgolongan[golongan-1]*jam_kerja;
    
    
    // output
    printf("%d", upah);
    
    
    return 0;
}