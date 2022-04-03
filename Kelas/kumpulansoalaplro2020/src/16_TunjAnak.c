/*
 * Nama Program   : 16_TunjAnak.c
 * Deskripsi      : menghitung tunjangan yang diterima dengan menggunakan aturan khusus
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/

#include <stdio.h>
 
int main(){
// kamus
    int nAnak;
    int maxnAnak;
    int gaji_pokok;
    int tunjangan;
    
// Algoritma
    //input
    scanf("%d %d", &nAnak, &gaji_pokok);
    
    //proses
    maxnAnak = nAnak > 3 ? 3: nAnak;
    tunjangan = (int) nAnak*(0.1*gaji_pokok);
    
    // output
    printf("Jumlah anak=%d dan Gaji pokok = %d maka tunjangan anak= %d*(10%%xGaji pokok)= %d", nAnak, gaji_pokok, maxnAnak, tunjangan);
    
    
    return 0;
}