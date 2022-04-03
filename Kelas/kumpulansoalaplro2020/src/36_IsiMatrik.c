/*
 * Nama Program   : 36_IsiMatrik.c
 * Deskripsi      : membuat matriks dengan pola
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>

int main(){
// kamus
    int M;
    int N;
    int i;
    int j;
    int *T;
     
// Algoritma
    //input
    scanf("%d%d", &M, &N);
    
    //proses
    if(M == N){
        for(i = 0; i < M; i++){
            for(j = 0; j < N; j++){
                if(i == j) printf("1 ");
                else if(i > j) printf("2 ");
                else printf("0 ");
            }
            printf("\n");
        }
    } else printf("Nilai M dan N harus sama");
    
    return 0;
}