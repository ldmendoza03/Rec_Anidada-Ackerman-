/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Recursividad Anidada(Ackerman)
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 13 de Noviembre del 2024
 * Fecha de Modificacion: 14 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Fernando Solis Acosta
 */

#include <iostream>  // Para std::cin y std::cout
#include <cstdio>    // Para printf
#include <cstdlib>   // Para atoi
#include <cctype>    // Para isdigit
#include "operaciones.h"

// Función de ingreso de datos que usa std::cin para capturar enteros
int ingresar(const char* msj) {
    printf("%s", msj);
    std::string input;
    int valor;

    // Ciclo para leer solo dígitos
    while (true) {
        std::getline(std::cin, input);
        bool valid = true;

        // Verifica que todos los caracteres en la entrada sean dígitos
        for (char c : input) {
            if (!isdigit(c)) {
                valid = false;
                break;
            }
        }

        if (valid && !input.empty()) {
            valor = std::stoi(input);  // Convierte la entrada a entero
            break;
        } else {
            printf("Entrada no válida. Introduce un número entero: ");
        }
    }
    return valor;
}

int main() {
    int n = ingresar("Introduce un numero entero: ");

    // Determina si el número es par o impar
    if (is_even(n)) {
        printf("\nEl numero %d es par.\n", n);
    } else {
        printf("\nEl numero %d es impar.\n", n);
    }
    return 0;
}