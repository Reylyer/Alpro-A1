/*
 * Nama Program   : 13_BiayaParkir.c
 * Deskripsi      : menghitung biaya parkir dengan flat price di 2 jam pertama dan perkembangan secara linier setelahnya
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/

#include <stdio.h>
 
int main(){
// kamus
    int lama;
    int biaya;
    int temp;
    
// Algoritma
    //input
    scanf("%i", &lama);
    
    //proses
    temp = lama;
    // flat deduct
    biaya = 2000;
    temp -= 2;
    while(temp>0){
        biaya+= 500;
        temp--;
    }
    
    // output
    printf("Lama parkir %d Jam Biayanya sebesar Rp. %d,-", lama, biaya);
    
    
    return 0;
}