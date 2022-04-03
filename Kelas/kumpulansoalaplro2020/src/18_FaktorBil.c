/*
 * Nama Program   : 18_FaktorBil.c
 * Deskripsi      : menampilkan faktor faktor bilangan dari bilangan integer sembarang N (N>0)
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/

#include <stdio.h>
 
int main(){
// kamus
    int N;
    int i;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    printf("N=%d, faktor bilangannya adalah 1");

    for(i = 2; i <N; i++){
        if(!(N % i)) printf(", %d", i);
    }
    if(N != 1) printf(" dan %d", N);

    
    
    return 0;
}