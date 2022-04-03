/*
 * Nama Program   : 40_CekSempurna.c
 * Deskripsi      : mengecek apakah suatu integer N(N>0) merupakan bilangan sempurna atau bukan
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 03, April 2022
**/
#include <stdio.h>

int main(){
// kamus
    int N;
    int i;
    int sum=0;
     
// Algoritma
    //input
    scanf("%d", &N);
    
    // proses
    for(i = 1; i <N; i++){
        if(!(N % i)) sum+=i;
    }

    // output
    if(sum == N) printf("%d Bilangan Sempurna", N);
    else printf("%d BUKAN Bilangan Sempurna", N);


    return 0;
}