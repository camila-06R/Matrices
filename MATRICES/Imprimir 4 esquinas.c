/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    // utilizamos sizeof para el tamaño de una estructura 
    Int filas = sizeof(matriz) / sizeof(matriz[0]);

    Int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);



    
///Imprimimos las 4 esquinas 
    Printf(“Las 4 esquinas de la matriz son:\n”);

    Printf(“Esquina superior izquierda: %d\n”, matriz[0][0]);

    Printf(“Esquina superior derecha: %d\n”, matriz[0][columnas – 1]);

    Printf(“Esquina inferior izquierda: %d\n”, matriz[filas – 1][0]);

    Printf(“Esquina inferior derecha: %d\n”, matriz[filas – 1][columnas – 1]);



    Return 0;

}
