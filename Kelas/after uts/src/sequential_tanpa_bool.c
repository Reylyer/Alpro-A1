/*
 * Nama Program   : sequential_tanpa_bool.c
 * Deskripsi      : Melakukan searching sequential tanpa bool
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 16, April 2022
**/

#include<stdio.h>

int sequential_tanpa_bool(int tabInt[], int N, int x){
    int i = 0;
    while(i < N && tabInt[i] != x){
        i++;
    }
    if(tabInt[i] == x){
        return i + 1;
    } else{
        return 0;
    }
}

int main(){
    int T[] = {1, 3, 5, -8, 12, 90, 3, 5};
    int size = 8;

    printf("%d", sequential_tanpa_bool(T, size, 5));    
}