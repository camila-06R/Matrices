/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int numero;
    char simbolo;
} Carta;

// Función para inicializar las cartas con números y símbolos
void inicializarCartas(Carta cartas[]) {
    int i, j;
    char simbolos[] = {'c', 'E', 'T', 'D'};
    
    for (i = 0; i < 13; i++) {
        for (j = 0; j < 4; j++) {
            cartas[i * 4 + j].numero = i + 1;
            cartas[i * 4 + j].simbolo = simbolos[j];
        }
    }
}

// Función para intercambiar cartas aleatoriamente
void barajarCartas(Carta cartas[]) {
    srand(time(NULL));
    for (int i = 0; i < 52; i++) {
        int randomIndex = rand() % 52;
        Carta temp = cartas[i];
        cartas[i] = cartas[randomIndex];
        cartas[randomIndex] = temp;
    }
}

int main() {
    Carta matriz[13][4];
    
    inicializarCartas(matriz[0]); // Llenar la matriz con las cartas inicializadas
    
    barajarCartas(matriz[0]); // Barajar las cartas
    
    // Mostrar la matriz resultante
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d%c ", matriz[i][j].numero, matriz[i][j].simbolo);
        }
        printf("\n");
    }
    
    return 0;
}