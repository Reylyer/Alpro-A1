/*
 * Nama Program   : 22_SiputNaik.c
 * Deskripsi      : menghitung berapa banyak hari dan malam yang diperlukan siput untuk keluar dari sebuah lubang sedalam N meter
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>

int main(){
// kamus
    float N;
    float h=0;
    int count=0;
    
// Algoritma
    //input
    scanf("%f", &N);
     
    //proses
    while(N > h){
        count++;
        // count 1: siang pertama
        // count 2: malam pertama
        if(count % 2)h += 0.3;
        else h-= 0.1;
    }
    
    // output
    printf("Siput membutuhkan %d hari %d malam", count/2 + count%2, count/2);
    
    return 0;
}