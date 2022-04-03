/*
 * Nama Program   : 26_Tetris3.c
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
        for(j = 0; j< i*(i+1)/2; j++) printf("*");
        printf("\n");
    }


    return 0;
}