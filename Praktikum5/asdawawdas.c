#include <stdio.h>
#include <stdlib.h>


int main(){
    // int* carray; //child
    int** parray; //parent
    int narray, nquery, size, idp, idc, i, j;

    scanf("%d%d", &narray, &nquery);

    parray = (int**)malloc(narray * sizeof *parray);

    for(i = 0; i < narray; i++) {
        scanf("%d", &size);
        int* carray = (int*)malloc(size * sizeof *carray);
        parray[i] = carray;
        for(j = 0; j < size; j++)scanf("%d", carray + j);
    }

    while(nquery--) {
        scanf("%d%d", &idp, &idc);
        printf("%d\n", parray[idp][idc]);
    }

    for(i = 0; i < narray; i++)free(parray[i]);
    free(parray);
    
    return 0;
}