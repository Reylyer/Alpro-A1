#include <stdio.h>

int main(){
// kamus
    int t1, t2, t3;

    
// Algoritma
    //input
    scanf("%d%d%d", &t1, &t2, &t3);
    
    //proses dan output
    if(t1<0 || t2 <0 || t3<0) printf("Masukan tahanan tidak boleh negatif");
    else printf("%d", t1 + t2 + t3);
    
    
    return 0;
}