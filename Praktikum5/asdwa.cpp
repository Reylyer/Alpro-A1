#include <stdlib.h>
#include <iostream>

using namespace std;

float** multiply44(float arr1[4][4], float arr2[4][4]){
    float **arrres = (float**)malloc(4 * sizeof *arrres);
    for(unsigned short i = 0; i < 4; i++) arrres[i] = (float*)malloc(4* sizeof **arrres);

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            int temp = 0;
            for (int k = 0; k < 4; k++) temp += arr1[i][k] * arr2[k][j];
            arrres[i][j] = temp;
        }
    }
    return arrres;
}

float* mul1616(float arr1[16], float arr2[16]){
    float *arrres = (float*)malloc(16 * sizeof *arrres);
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            int temp = 0;
            for (int k = 0; k < 4; k++) temp += arr1[i*4 + k] * arr2[k*4 + j];
            arrres[i*4 + j] = temp;
        }
    }
    return arrres;
}

int main()
{
    float arr1[16], arr2[16];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            cin >> arr1[i*4 + j];
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            cin >> arr2[i*4 + j];
    }
    printf("passed\n");
    float* mulres = mul1616(arr1, arr2);
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (j == 4 - 1) cout << mulres[i*4 + j] << endl;
            else cout << mulres[i*4 + j] << ' ';
        }
    }
    free(mulres);
}