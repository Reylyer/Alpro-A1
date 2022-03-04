#include <stdio.h>

int main(){
// kamus
    int lama, biaya, temp;
    
// Algoritma
    //input
    scanf("%i", &lama);
    
    //proses
    temp = lama;
    // flat deduct
    biaya = 2000;
    temp -= 2;
    while(temp>0){
        biaya+= 500;
        temp--;
    }
    
    // output
    printf("Lama parkir %d Jam Biayanya sebesar Rp. %d,-", lama, biaya);
    
    return 0;
}