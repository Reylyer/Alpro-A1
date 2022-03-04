#include <stdio.h>

int main(){
// kamus
    int golongan, pemakaian, tariff;
    
// Algoritma
    //input
    scanf("%d %d", &golongan, &pemakaian);
    
    //proses
    tariff = golongan * 1000 * pemakaian;
    tariff = tariff > 100000 ? tariff : 100000;
    
    // output
    printf("Golongan %d, pemakaian %d kWH, maka jumlah bayarnya %d", golongan, pemakaian, tariff);
    
    return 0;
}