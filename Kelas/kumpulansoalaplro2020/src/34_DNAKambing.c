/*
 * Nama Program   : 34_DNAKambing.c
 * Deskripsi      : menghitung relasi saudara dan tidak saudara dari kumpulan DNA kambing
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>

int main(){
// kamus
    int N;
    int i;
    int j;
    int nS=0;
    int ntS=0;
    int *T;
     
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses
    if(N <= 0) printf("N harus positif");
    else{
        T = (int*) malloc(N * sizeof *T);
        for(i = 0; i < N; i++) scanf("%d", T + i);
        for(i = 0; i < N; i++){
            for(j = i+1; j < N; j++){
                if(T[j] - T[i] < 3) nS++;
                else ntS++;
            }
        }
        printf("%d %d", nS, ntS);
    }
    
    return 0;
}