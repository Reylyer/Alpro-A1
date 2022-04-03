/*
 * Nama Program   : 41_JumPrima.c
 * Deskripsi      : menghitung jumlah deret prima dari 2 hingga N
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 03, April 2022
**/

#include <stdio.h>
#include <math.h>
 
int main(){
// kamus
    int N;
    int i;
    int j;
    int prima;
    int sum;
    
// Algoritma
    //input
    scanf("%d", &N);

    // proses
    if(N < 2){
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
    } 
    else{
        printf("2");
        sum = 2;
        for(j = 3; j <= N; j++){
            prima = 1;
            for(i = 2; i <=sqrt(j); i++){
                if(!(j % i)){
                    prima = 0;
                }
            }
            if(prima){
                printf("+%d", j);
                sum += j;
            }
        }
        printf(" dengan Jumlahan Deret Bilangannya adalah Sn=%d", sum);
    }

    return 0;
}