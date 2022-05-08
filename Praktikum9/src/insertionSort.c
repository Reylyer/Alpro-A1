#include<stdio.h>
#include<stdlib.h>


void insertionSort(int arr[], int n){
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        // geser ke kiri selama temp ini lebih kecil dari kirinya
        while (0 <= j && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // selipin
        arr[j + 1] = temp;
    }
}


int main(){
    int arr[] =  {10, 2, -1, 4, 120, 40, 80};
    int n = 7;

    insertionSort(arr, n);

    printf("hasil sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}