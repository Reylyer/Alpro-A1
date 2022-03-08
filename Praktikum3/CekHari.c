/*
 * Nama File        : CekHari.c
 * Deskripsi        : mengubah hari format angka menjadi format string
 * Pembuat          : Givandra Haikal Adjie
 * Tgl pembuatan    : Selasa, 08-03-2022 12:07
**/

#include <stdio.h>

int main(){
// kamus
    int hari;
    
// Algoritma
    //input
    printf("Masukkan angka yang akan diubah menjadi hari(1-7): ");
    scanf("%d", &hari);
    
    //proses
    switch (hari){
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
    }
    
    return 0;
}