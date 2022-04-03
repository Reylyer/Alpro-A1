/*
 * Nama Program   : 21_DeretPrima.c
 * Deskripsi      : membuat deret prima dari 1 hingga N jika diberikan N
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>
#include <math.h>
 
int main(){
// kamus
    int N;
    int i;
    int j;
    int prima;
    
// Algoritma
    //input
    scanf("%d", &N);
 
    // proses
    for(j = 2; j <= N; j++){
        prima = 1;
        for(i = 2; i <=sqrt(j); i++){
            if(!(j % i)){
                prima = 0;
            }
        }
        if(prima){
            printf("%d ", j);
        }
    }

    return 0;
}