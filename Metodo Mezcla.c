/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Función para mezclar dos subarreglos ordenados en uno solo
void merge(int arr[], int l, int m, int r) {
    // Calcula el tamaño de los subarreglos
    int n1 = m - l + 1;  // Tamaño del primer subarreglo
    int n2 = r - m;      // Tamaño del segundo subarreglo

    // Crea subarreglos temporales L y R
    int L[n1], R[n2];

    // Copia los datos a los subarreglos temporales L y R
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];  // Copia elementos del subarreglo izquierdo
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];  // Copia elementos del subarreglo derecho

    // Une los subarreglos temporales L y R en el arreglo original arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];  // Si el elemento en L es menor o igual, lo copia a arr
            i++;
        } else {
            arr[k] = R[j];  // Si el elemento en R es menor, lo copia a arr
            j++;
        }
        k++;
    }

    // Copia los elementos restantes de L, si hay alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia los elementos restantes de R, si hay alguno
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Función para dividir el arreglo en subarreglos y ordenarlos recursivamente
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // Calcula el punto medio

        // Ordena la mitad izquierda y la mitad derecha recursivamente
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Combina las dos mitades ordenadas
        merge(arr, l, m, r);
    }
}

// Función principal
int main() {
    int arr[13] = {12, 11, 13, 5, 6, 7, 3, 4, 1, 2, 10, 8, 9};  // Arreglo de entrada desordenado
    int n = 13;  // Tamaño del arreglo

    mergeSort(arr, 0, n - 1);  // Llama a mergeSort para ordenar el arreglo

    // Imprime el arreglo ordenado
    printf("Ordenamiento por mezcla: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;  // Retorna 0 para indicar que el programa terminó correctamente
}