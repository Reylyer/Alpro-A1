#include<stdio.h>
#include<stdlib.h>


void selectionSort(int arr[], int n){
    int i, j, idx_tkc, temp;
  
    // iterasi array
    for (i = 0; i < n-1; i++){
        // cari terkecil
        idx_tkc = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[idx_tkc])
            idx_tkc = j;
        // tuker terkecil dengan yang di i sekarang
        // simplenya bawa kecil ke kiri
        temp = arr[i];
        arr[i] = arr[idx_tkc];
        arr[idx_tkc] = temp;
    }
}


int main(){
    int arr[] =  {10, 2, -1, 4, 120, 40, 80};
    int n = 7;

    selectionSort(arr, n);

    printf("hasil sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}