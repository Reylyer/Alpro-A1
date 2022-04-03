/*
 * Nama Program   : 29_JumDeret2.c
 * Deskripsi      : menghitung deret 1 + 3 + 5 + … + (2N-1)
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
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
    //proses
    if(N <= 0) printf("N harus positif");
    else{
        for(i = 1; i <=N; i++) sum +=2*i-1;
        printf("%d", sum);
    }
    return 0;
}