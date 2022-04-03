/*
 * Nama Program   : 25_Tetris2.c
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
    for(i = 1; i<=N; i++){
        for(j = 0; j< i; j++) printf("*");
        printf("\n");
    }
    for(i = N - 1; i > 0; i--){
        for(j = i; j > 0; j--) printf("*");
        printf("\n");
    }


    return 0;
}