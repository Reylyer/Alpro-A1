/*
 * Nama Program   : 43_Faktorial.c
 * Deskripsi      : menghitung faktorial dari N (N!)
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 03, April 2022
**/
#include<stdio.h>
 
int Faktorial(int N){
// kamus lokal
    int i;
    int fact;
// algoritma
    fact = 1;
    if(N > 0){
        for(i = 1; i <= N; i++){
            fact *= i;
        }
    }
    return fact;
}

int main(){
// kamus
    int N;
    
// Algoritma
    //input
    scanf("%d", &N);
    printf("%d", Faktorial(N));
    return 0;
}