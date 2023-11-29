/* Crear un programa en C que permita sumar 2 matrices de la misma dimensión.
El usuario ingresa las dimensiones de la matriz. Utilice números aleatorios entre 0 y 100 para inicializar las matrices.
Imprimir todas las matrices.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaracion de variables para cada matriz
    srand(time(NULL));
    int fila1 = 0, columna1 = 0;
    int fila2 = 0, columna2 = 0;

    printf("--- SUMA MATRICES ---");
    printf("\n");

    // MATRIZ A
    // Solicitar dimensiones matriz y llenarla
    printf("Ingrese el numero de filas para su primera matriz.\n");
    scanf("%d", &fila1);
    printf("Ingrese el numero de columnas para su primera matriz.\n");
    scanf("%d", &columna1);
    int matrizA[fila1][columna1];

    // Llenar numeros aleatorios
    printf("Su matriz A es A = \n");
    for (int i = 0; i < fila1; i++)
    {
        for (int j = 0; j < columna1; j++)
        {
            matrizA[i][j] = rand() % 101;
            printf("%4d |", matrizA[i][j]);
        }
        printf("\n");
    }

    // MATRIZ B dimensiones
    printf("Ingrese el numero de filas para su segunda matriz.\n");
    scanf("%d", &fila2);
    printf("Ingrese el numero de columnas para su segunda matriz.\n");
    scanf("%d", &columna2);
    printf("\n");
    // Llenar numeros aleatorios
    int matrizB[fila2][columna2];
    printf("Su matriz B es B = \n");
    for (int i = 0; i < fila2; i++)
    {
        for (int j = 0; j < columna2; j++)
        {
            matrizB[i][j] = rand() % 101;
            printf("%4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
