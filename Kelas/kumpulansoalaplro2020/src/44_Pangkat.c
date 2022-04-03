/*
 * Nama Program   : 44_Pangkat.c
 * Deskripsi      : menghitung a dipangkatkan p (a^p)
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 03, April 2022
**/
#include<stdio.h>
 
float Pangkat(int a, int p){
// kamus lokal
    int i;
    float res;
// algoritma
    res = 1;
    if(p > 0){
        for(i = 1; i <= p; i++){
            res *= a;
        }
    }
    if(p < 0){
        for(i = 0; i > p; i--){
            res /= (float)a;
        }
    }
    return res;
}

int main(){
// kamus
    int a;
    int p;
    
// Algoritma
    //input
    scanf("%d%d", &a, &p);
    printf("%f", Pangkat(a, p));
    return 0;
}