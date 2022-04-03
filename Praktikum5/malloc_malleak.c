#include <stdlib.h>
#include <stdio.h>

int main(){
    // Kamus
    int i, N, sum, *P;
    // Algoritma
    P = (int*) malloc(1*sizeof(int));
    sum = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        *(P+(i-1)) = i;
        sum += *(P+(i-1));
    }
    printf("%d\n", sum);
    free(P);
    return 0;
}