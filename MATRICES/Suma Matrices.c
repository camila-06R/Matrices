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
    int matriz2[4][4] = {
        {16, 3, 7, 13},
        {12, 12, 5, 9},
        {5, 4, 16, 21},
        {1, 2, 12, 11}
    };
    int suma[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Suma de matrices:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", suma[i][j]);
        }
        printf("\n");
    }

    return 0;
}