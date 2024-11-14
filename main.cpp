/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Recursividad Anidada(Ackerman)
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 13 de Noviembre del 2024
 * Fecha de Modificacion: 13 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Fernando Solis Acosta
 */

#include <stdio.h>
#include "operaciones.h"

int main() {
    int m, n;

    // Solicita el valor de m al usuario
    printf("Introduce el valor de m (entre 0 y 3): ");
    while (scanf("%d", &m) != 1 || m < 0 || m > 3) {  // Limitando m a un máximo de 3
        printf("Entrada no válida. Introduce un número entero no negativo para m (máximo 3): ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    // Solicita el valor de n al usuario
    printf("Introduce el valor de n (entre 0 y 10): ");
    while (scanf("%d", &n) != 1 || n < 0 || n > 10) {  // Limitando n a un máximo de 10
        printf("Entrada no válida. Introduce un número entero no negativo para n (máximo 10): ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    printf("Calculando Ackermann de (%d, %d)...\n", m, n);
    printf("Resultado: %d\n", ackermann(m, n));

    return 0;
}
