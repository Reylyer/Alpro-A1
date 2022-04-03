/*
 * Nama Program   : 38_JumDeret41t.c
 * Deskripsi      : menampilkan dan menghitung deret 1 + 3 + 6 + 10 + 15 + 21 + … + N*(N+1)/2
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 03, April 2022
**/
#include <stdio.h>

int main(){
// kamus
    int N;
    int i;
    int sum=0;
     
// Algoritma
    //input
    scanf("%d", &N);
    //proses
    if(N <= 0) printf("Tidak ada Deret Bilangan, sehingga Sn=0");
    else{
        for(i = 1; i <N; i++){
            sum += i*(i+1)/2;
            printf("%d, ", i*(i+1)/2);
        }
        sum += N*(N+1)/2;
        printf("%d dengan Sn=", N*(N+1)/2);
        printf("%d", sum);
    }
    return 0;
}