/*
 * Nama Program   : 37_Kuadran.c
 * Deskripsi      : Menentukan kuadran titik
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 29, Maret 2022
**/
#include <stdio.h>

int main(){
// kamus
    int x, y;
     
// Algoritma
    //input
    scanf("%d%d", &x, &y);
    
    //proses
    if(x > 0 && y > 0) printf("Kuadran I");
    else if(x < 0 && y > 0) printf("Kuadran II");
    else if(x < 0 && y < 0) printf("Kuadran III");
    else if(x > 0 && y < 0) printf("Kuadran IV");
    
    // output
    printf("");
    
    return 0;
}