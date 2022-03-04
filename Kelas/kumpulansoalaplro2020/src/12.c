#include <stdio.h>

int main(){
// kamus
    int iA, iB;
    char op;
    
// Algoritma
    //input
    scanf("%d %d %c", &iA, &iB, &op);
    
    //proses
    switch (op){
        case 'a':
            printf("%d", iA + iB);
            break;
        case 'b':
            printf("%d", iA - iB);
            break;
        case 'c':
            printf("%d", iA * iB);
            break;
        case 'd':
            printf("%f", iA / (float)iB);
            break;
        case 'e':
            printf("%d", iA / iB);
            break;
        case 'f':
            printf("%d", iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
    }
    
    
    return 0;
}