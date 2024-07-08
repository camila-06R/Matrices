/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() {
    int arr[13] = {12, 11, 13, 5, 6, 7, 3, 4, 1, 2, 10, 8, 9};
    int n = 13;
    // arr: es el arreglo de enteros a ordenar 
    // n: es el número de elementos en el arreglo
    // current: representa el valor del elemento actual que se va a insertar en su posición correcta
 
void insercion (int arr[], int n) { 
    for (int i = 1; i < n; i++) {
        int current = arr[i];        
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}


    insercion(arr, n);
    
    printf("Ordenamiento por insercion: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}