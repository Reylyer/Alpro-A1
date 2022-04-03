/*
 * Nama Program   : 12_Kalk-SS.c
 * Deskripsi      : kalkulator sederhana dengan 2 angka masukan dan 1 operator
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 08, Maret 2022
**/
#include <stdio.h>
 
int main(){
// kamus
    int iA;
    int iB;
    char op;
    
// Algoritma
    //input
    scanf("%d %d %c", &iA, &iB, &op);
    
    //proses
    switch (op){
        case 'a':
            printf("%d", iA + iB);
            break;
        case 'b':
            printf("%d", iA - iB);
            break;
        case 'c':
            printf("%d", iA * iB);
            break;
        case 'd':
            printf("%f", iA / (float)iB);
            break;
        case 'e':
            printf("%d", iA / iB);
            break;
        case 'f':
            printf("%d", iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
    }
    
    
    return 0;
}