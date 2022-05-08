/*
 * Nama Program   : sequential_bool.c
 * Deskripsi      : Melakukan searching sequential menggunaan bool
 * Nama           : Givandra Haikal Adjie - 24060121130063
 * Tanggal        : 16, April 2022
**/


#include<stdio.h>

int sequential_bool(int tabInt[], int N, int x){
    int i = 0;
    int found = 0; // representasi false
    while(i < N && !found){
        if(tabInt[i] == x){
            found = 1;
        } else{
            i++;
        }
    }
    if(found){
        return i + 1;
    } else{
        return 0;
    }
}

int main(){
    int T[] = {1, 3, 5, -8, 12, 90, 3, 5};
    int size = 8;

    printf("%d", sequential_bool(T, size, 5));    
}

