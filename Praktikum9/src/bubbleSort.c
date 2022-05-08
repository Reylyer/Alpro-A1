#include<stdio.h>
#include<stdlib.h>


void bubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        // geser elemen terbesar ke paling kanan
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(){
    int arr[] =  {10, 2, -1, 4, 120, 40, 80};
    int n = 7;

    bubbleSort(arr, n);

    printf("hasil sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}