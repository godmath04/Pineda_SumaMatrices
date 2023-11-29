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

    // SUMA DE LA MATRIZ

    // Verificar dimensiones para la suma
    if (fila1 == fila2 && columna1 == columna2)
    {
        int fila3 = fila1;
        int columna3 = columna1;
        int matrizSuma[fila3][columna3];
        printf("La suma de las matrices es: \n");
        for (int i = 0; i < fila3; i++)
        {
            for (int j = 0; j < columna3; j++)
            {
                matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
                printf("%4d   |", matrizSuma[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n");
        printf("No se pueden sumar pues sus dimensiones son diferentes. \n");
    }

    return 0;
}
