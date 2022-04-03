/*
 * Nama Program   : 06_CekProsesBil.c
 * Deskripsi      : menghitung dan menampilkan sebuah proses klasifikasi bilangan integer sembarang N
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
 
#include <stdio.h>

int main(){
// kamus
    int N;
    
// Algoritma
    //input
    printf("Masukan bilangan N: ");
    scanf("%d", &N);
    
    //proses
    if(N%2){ // ganjil
        N += 2;
        if(N%3) N+=1; // bukan kelipatan 3 kalau + 2
        else N+=4;
    } else {
        N += 3;
        if(N%5) N += 2; // 
        else N += 5;
    }

    // output
    printf("%d", N);
    
    return 0;
}