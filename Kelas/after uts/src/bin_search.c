// C program to implement iterative Binary Search
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        // tengah = awal + (ujung - awal)/2 langsung di operasi pembagian integer
        int m = l + (r - l) / 2;
 
        // x == m
        if (arr[m] == x)
            return m;
 
        // x lebih besar geser awal ke m + 1
        if (arr[m] < x)
            l = m + 1;
 
        // x lebih kecil geser ujung ke m - 1
        else
            r = m - 1;
    }
 
    return -1;
}
 
int main(void){
    char p;
    printf("Array default atau buat sendiri? (y/n) : ");
    scanf("%c", &p);

    int *arr;
    int n;
    int x;
    int def_arr[] =  { 2, 3, 4, 10, 40};
    switch(p){
        case 'y':
        case 'Y':
            printf("Berapa banyak elemen dalam array? : ");
            scanf("%d", &n);
            printf("Masukkan %d angka secara terurut ke atas\n", n);
            arr = (int*)malloc(n*sizeof*arr);
            for(int i = 0; i < n; i++) scanf("%d", arr + i);
            break;
        default:
            arr = def_arr;
            n = sizeof(def_arr) / sizeof(def_arr[0]);

    }
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nElemen yang anda ingin cari? ");
    scanf("%d", &x);


    int result = binarySearch(arr, 0, n - 1, x);
    if(result != -1) printf("Elemen %d ditemukan pada index ke %d", x, result);
    else printf("Elemen %d tidak ditemukan dalam array", x);

}

