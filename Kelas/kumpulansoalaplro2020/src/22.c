#include <stdio.h>

int main(){
// kamus
    float N, h=0;
    int count=0;
    
// Algoritma
    //input
    scanf("%f", &N);
    
    //proses
    while(N > h){
        count++;
        // count 1: siang pertama
        // count 2: malam pertama
        if(count % 2)h += 0.3;
        else h-= 0.1;
    }
    
    // output
    printf("Siput membutuhkan %d hari %d malam", count/2 + count%2, count/2);
    
    return 0;
}