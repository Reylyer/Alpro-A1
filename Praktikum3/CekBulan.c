/*
 * Nama File        : CekBulan.c
 * Deskripsi        : mengubah bulan format angka menjadi format string
 * Pembuat          : Givandra Haikal Adjie
 * Tgl pembuatan    : Selasa, 08-03-2022 12:04
**/

#include <stdio.h>

int main(){
// kamus
    int bulan;
    
// Algoritma
    //input
    printf("Masukkan angka yang akan diubah menjadi bulan(1-12): ");
    scanf("%d", &bulan);
    
    //proses
    switch (bulan){
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
    }
    
    return 0;
}