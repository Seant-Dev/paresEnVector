#include <stdio.h>

int main(void) {
    int miArreglo[13];
    int indice, residuo;
    for (indice = 0; indice < 13; indice = indice + 1) {
        printf("Ingresa el elemento %d del arreglo: ", indice);
        scanf("%d", &miArreglo[indice]);
    }

    for (indice = 0; indice < 13; indice = indice + 1) {
        residuo = miArreglo[indice] % 2;
        if (residuo == 0) {
            printf("El elemento %d es par y su valor es %d \n", indice, miArreglo[indice]);
        }
    }
    return 0;
}