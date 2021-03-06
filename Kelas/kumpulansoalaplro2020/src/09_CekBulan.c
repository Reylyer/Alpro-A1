/*
 * Nama Program   : 09_CekBulan.c
 * Deskripsi      : mengubah integer masukan menjadi nama bulan
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    int i;
    const char nama_nama_bulan[][12] = {
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"
    };
    
// Algoritma
    //input
    scanf("%d", &i);
    
    //proses
    if(i>=1 && i<=12){
        printf("%s", nama_nama_bulan[i - 1]);
    } else printf("Masukan nomor bulan tidak tepat");
    
    
    return 0;
}