#include <stdio.h>

int main(){
// kamus
    int a, b, c;
    
// Algoritma
    //input
    scanf("%d%d%d", &a, &b, &c);
    
    //proses dan output
    if(a<=0 || b<=0 || c<=0) printf("Terdapat nilai yang bukan sisi segitiga");
    else{
        if(a == b && b == c) printf("Segitiga Sama Sisi");
        else if(a + b > c && a + c > b && b + c > a){
            if(a == b || a == c || b == c) printf("Segitiga Sama Kaki");
            else printf("Segitiga Sembarang");
        } else printf("Segitiga tidak valid");
    }
    
    
    return 0;
}