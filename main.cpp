/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Recursividad Anidada (Ackerman)
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 13 de Noviembre del 2024
 * Fecha de Modificacion: 14 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Fernando Solis Acosta
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

// Función de ingreso de datos que usa getch para capturar enteros
int ingresar(const char *msj) {
    printf("%s", msj);
    char cad[10], c;
    int valor, i = 0;

    while ((c = getch()) != 13) { // 13 es el código ASCII para Enter
        if (c >= '0' && c <= '9' && i < 9) {
            printf("%c", c); // Mostrar el dígito ingresado
            cad[i++] = c;
        }
    }
    cad[i] = '\0';
    valor = atoi(cad); // Convertir la entrada a entero
    return valor;
}

int main() {
    int m = ingresar("Introduce el valor de m: ");
    int n = ingresar("\nIntroduce el valor de n: ");

    printf("\nAckermann de (%d, %d): %d\n", m, n, ackermann(m, n));
    return 0;
}
