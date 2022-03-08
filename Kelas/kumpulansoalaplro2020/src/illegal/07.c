#include <stdio.h>

int main(){
// kamus
    unsigned char i[50];
    int type = 0;

// Algoritma
    //input
    scanf("%s", i);
    
    //proses

    //cek minus di awal
    if(i[0] == '-') type = 2;
    else if(i[0] == '0') type = 1;

    for(int x = 1; i[x] != '\0'; x++){
        if(!(i[x]>='0' && i[x]<='9')){
            type = 3;
            break;
        }
    }
    
    // output
    switch (type){
        case 0:
            printf("Bulat positif");
            break;
        case 1:
            printf("Nol");
            break;
        case 2:
            printf("Bulat negatif");
            break;
        case 3:
            printf("Bukan termasuk sebuah bilangan");
    }
    
    
    return 0;
}





// #include <stdio.h>

// int main() {
//     float num;
//     printf("Masukkan sebuah bilangan: ");
//     scanf("%d", &num);
//     if (num == (int)num){
//         if(num > 0) {
//             printf("Positive integer");
//         } else if (num == 0) {
//             printf("Zero");
//         } else if (num < 0) {
//             printf("Negative integer");
//         }
//     } else {
//         printf("Invalid input");
//     }
// }

