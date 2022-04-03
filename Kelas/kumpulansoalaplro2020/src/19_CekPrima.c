/*
 * Nama Program   : 19_CekPrima.c
 * Deskripsi      : mengecek apakah suatu integer N(N>0) merupakan bilangan prima
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/

#include <stdio.h>
#include <math.h>

int main(){
// kamus
    int N;
    int i;
    int prima = 1;
     
// Algoritma
    //input
    scanf("%d", &N);

    // proses
    for(i = 2; i <=sqrt(N); i++){
        if(!(N % i)){
            prima = 0;
        }
    }

    // output
    if(prima) printf("N=%d adalah bilangan prima", N);
    else printf("N=%d adalah bukan bilangan prima", N);
    
    
    return 0;
}