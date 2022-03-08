#include <stdio.h>

int main(){
// kamus
    int golongan, jam_kerja, upah;
    int tgolongan[] = {1000, 1500, 2000, 2500};
// Algoritma
    //input
    scanf("%d %d", &golongan, &jam_kerja);
    
    //proses
    upah = jam_kerja > 40 ? (int)(tgolongan[golongan-1]*(40 + (jam_kerja-40)*1.5)) : tgolongan[golongan-1]*jam_kerja;
    
    
    // output
    printf("%d", upah);
    
    
    return 0;
}