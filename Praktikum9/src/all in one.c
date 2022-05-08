#include<stdio.h>
#include<stdlib.h>

#define MAX_ARR_SIZE 65537

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
    char p;
    printf("Array default(n) atau buat sendiri(y)? (y/n): ");
    scanf("%c", &p);

    int *arr;
    int n;
    int swi;
    int min, max;
    int def_arr[] =  {10, 2, -1, 4, 120, 40, 80};
    switch(p){
        case 'y':
        case 'Y':
            printf("Berapa banyak elemen dalam array? : ");
            scanf("%d", &n);
            printf("Masukkan %d angka\n", n);
            arr = (int*)malloc(n*sizeof*arr);
            for(int i = 0; i < n; i++) scanf("%d", arr + i);
            break;
        default:
            arr = def_arr;
            n = sizeof(def_arr) / sizeof(def_arr[0]);
    }

    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\nJenis sorting yang akan di lakukan?\n");
    printf("0: selection sort\n");
    printf("1: insertion sort\n");
    printf("2: bubble sort\n");
    printf("3: counting sort\n");
    printf("Pilihan: ");
    scanf("%d", &swi);
    
    switch(swi){
        case 0:
            selectionSort(arr, n);
            break;
        case 1:
            insertionSort(arr, n);
            break;
        case 2:
            bubbleSort(arr, n);
            break;
        case 3:
            min = arr[0];
            max = arr[0];
            for(int i = 0; i < n; i++){
                if(min > arr[i]) min = arr[i];
                if(max < arr[i]) max = arr[i];
            }
            countSort(arr, n, max, min);
            break;
        default:
            printf("tolong masukkan angka dengan benar");
            return 1;
    }


    printf("hasil sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}