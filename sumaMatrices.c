/* Crear un programa en C que permita sumar 2 matrices de la misma dimensión.
El usuario ingresa las dimensiones de la matriz. Utilice números aleatorios entre 0 y 100 para inicializar las matrices.
Imprimir todas las matrices.*/

#include<stdio.h>
#include<time.h>

int main()
{
    // Declaracion de variables para cada matriz

    int fila1 = 0, columna1 = 0;
    int fila2 = 0, columna2 = 0;

    printf("--- SUMA MATRICES ---");
    // Solicitar dimensiones matriz
    printf("Ingrese el numero de filas para su primera matriz.\n");
    scanf("%d", &fila1);
    printf("Ingrese el numero de columnas para su primera matriz.\n");
    scanf("%d", &columna1);
    printf("Ingrese el numero de filas para su segunda matriz.\n");
    scanf("%d", &fila2);
    printf("Ingrese el numero de columnas para su segunda matriz.\n");
    scanf("%d", &columna2);
    

    return 0;
}
