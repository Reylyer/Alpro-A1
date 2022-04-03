/*
 * Nama Program   : 24_Tetris1.c
 * Deskripsi      : menampilkan piramida bintang menggunakan loop
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>

int main(){
// kamus
    int i;
    int j;
    int N;
    
// Algoritma
    //input
    scanf("%d", &N);
     
    //proses dan output
    for(i = N; i > 0; i--){
        for(j = i; j > 0; j--) printf("*");
        printf("\n");
    }


    return 0;
}