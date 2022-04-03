/*
 * Nama Program   : 10_CekSeriPositif.c
 * Deskripsi      : memproses 3 masukan integer dan menjumlahkan jika ketiga masukan positif
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
#include <stdio.h>
 
int main(){
// kamus
    int t1;
    int t2;
    int t3;

    
// Algoritma
    //input
    printf("Masukkan 3 bilangan tahanan :");
    scanf("%d%d%d", &t1, &t2, &t3);
    
    //proses dan output
    if(t1<0 || t2 <0 || t3<0) printf("Masukan tahanan tidak boleh negatif");
    else printf("%d", t1 + t2 + t3);
    
    
    return 0;
}