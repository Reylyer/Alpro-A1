#include <stdio.h>

int main(){
// kamus
    int nAnak, maxnAnak, gaji_pokok, tunjangan;
    
// Algoritma
    //input
    scanf("%d %d", &nAnak, &gaji_pokok);
    
    //proses
    maxnAnak = nAnak > 3 ? 3: nAnak;
    tunjangan = (int) nAnak*(0.1*gaji_pokok);
    
    // output
    printf("Jumlah anak=%d dan Gaji pokok = %d maka tunjangan anak= %d*(10%%xGaji pokok)= %d", nAnak, gaji_pokok, maxnAnak, tunjangan);
    
    return 0;
}