#include<stdio.h>
#include<stdlib.h>

#define MAX_ARR_SIZE 65537

void countSort(int arr[], int n, int max, int min){
    // track jumlah elemen
    int count[MAX_ARR_SIZE] = {0};
    int i, j, insId = 0;
 
    // counting
    for (i = 0; i < n; i++){
        count[arr[i] - min]++;
    }


    for (i = 0; i < max - min + 1; i++){
        
        for(j = 0; j < count[i]; j++){
            arr[insId] = i + min;
            insId++;
        }
    }

}


int main(){
    int arr[] =  {10, 2, -1, 4, 120, 40, 80};
    int n = 7;

    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }   
    countSort(arr, n, max, min);

    printf("hasil sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}