/*
 * Nama Program   : 08_CekHari.c
 * Deskripsi      : mengubah integer masukan menjadi nama hari
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    char c;
    const char nama_nama_hari[][7] = {
        "Senin",
        "Selasa",
        "Rabu",
        "Kamis",
        "Jumat",
        "Sabtu",
        "Minggu"
    };
    
// Algoritma
    //input
    printf("Masukkan bilangan yang akan di ubah menjadi hari: ");
    scanf("%c", &c);
    
    //proses
    if(c>='1' && c<='7'){
        printf("%s", nama_nama_hari[c - '1']);
    } else printf("Masukan nomor hari tidak tepat");
    
    
    return 0;
}