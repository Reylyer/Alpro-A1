/*
 * Nama Program   : 35_KelBil.c
 * Deskripsi      : Mencari KPK dari 3 angka
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>

int main(){
// kamus
    int kpk;
    int T[3];
     
// Algoritma
    //input
    scanf("%d%d%d", T, T+1, T+2);
    kpk = T[2];    
    //proses
    while (kpk % T[0] || kpk % T[1]) kpk += T[2];
    // output
    printf("%d", kpk);
    
    return 0;
}