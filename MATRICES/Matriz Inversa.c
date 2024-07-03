/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void invertirMatriz2x2(int matriz[2][2], float inversa[2][2]) {
    int det = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    if (det == 0) {
        printf("La matriz no tiene inversa.\n");
        return;
    }
    inversa[0][0] = matriz[1][1] / (float)det;
    inversa[0][1] = -matriz[0][1] / (float)det;
    inversa[1][0] = -matriz[1][0] / (float)det;
    inversa[1][1] = matriz[0][0] / (float)det;
}

int main() {
    int matriz[2][2] = {
        {4, 7},
        {2, 6}
    };

    float inversa[2][2];
    invertirMatriz2x2(matriz, inversa);

    printf("Matriz inversa:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%.2f ", inversa[i][j]);
        }
        printf("\n");
    }

    return 0;
}