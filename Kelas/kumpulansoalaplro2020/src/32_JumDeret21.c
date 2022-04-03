/*
 * Nama Program   : 32_JumDeret21.c
 * Deskripsi      : menghitung deret 1 + 3 + 5 + … + (2N-1) dengan array
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdlib.h>
#include <stdio.h>

int main(){
// kamus
    int N;
    int i;
    int sum=0;
    int *T;
     
// Algoritma
    //input
    scanf("%d", &N);
    //proses
    if(N <= 0) printf("N harus positif");
    else{
        T = (int*) malloc(N * sizeof *T);
        for(i = 1; i <=N; i++) T[i-1] = 2*i-1;
        for(i = 1; i <=N; i++) sum += T[i-1];
        printf("%d", sum);
    }
    free(T);
    return 0;
}