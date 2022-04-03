/*
 * Nama Program   : 42_BilPrimaN.c
 * Deskripsi      : mencetak deret prima dari 1 hingga N jika diberikan N
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
    
// Algoritma
    //input
    scanf("%d", &N);

    if(N < 2){
        printf("Tidak Ada Bilangan Prima");
    }
    else{
        printf("Bilangan Primanya adalah 2");
        for(j = 3; j <= N; j++){
            prima = 1;
            for(i = 2; i <=sqrt(j); i++){
                if(!(j % i)){
                    prima = 0;
                }
            }
            if(prima){
                printf(", %d", j);
            }
        }
    }

    return 0;
}