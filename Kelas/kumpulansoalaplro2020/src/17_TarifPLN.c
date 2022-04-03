/*
 * Nama Program   : 17_TarifPLN.c
 * Deskripsi      : menghitung biaya tarif PLN dengan menggunakan aturan khusus
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
#include <stdio.h>
 
int main(){
// kamus
    int golongan;
    int pemakaian;
    int tariff;
    
// Algoritma
    //input
    scanf("%d %d", &golongan, &pemakaian);
    
    //proses
    tariff = golongan * 1000 * pemakaian;
    tariff = pemakaian < 100 ? 100 * 1000 * golongan : pemakaian < 1000 ? pemakaian * 1000 * golongan : pemakaian * 1000 * golongan * 11 / 10;
    
    // output
    printf("Golongan %d, pemakaian %d kWH, maka jumlah bayarnya %d", golongan, pemakaian, tariff);
    
    
    return 0;
}