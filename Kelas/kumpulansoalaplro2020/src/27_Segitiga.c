/*
 * Nama Program   : 27_Segitiga.c
 * Deskripsi      : menampilkan segitiga dengan bintang
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
    for(i = 0; i<N; i++){
        for(j = 0; j< i; j++) printf(" ");
        for(j = i%2? i-1: i; j < 2*N - i - 1; j++) j%2? printf(" ") : printf("*");

        printf("\n");
    }


    return 0;
}