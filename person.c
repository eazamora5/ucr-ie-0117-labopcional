//Universidad de Costa Rica
//IE-0117 Programacion bajo plataformas abiertas
//Profesora: Carolina Trejos
//Estudiante: Enrique Zamora Solis
//Laboratorio Opcional

#include <stdio.h>
#include "person.h"

void print_persons(const Person persons[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nombre: %s, Edad: %d, Altura: %.2f cm\n", persons[i].name, persons[i].age, persons[i].height);
    }
    printf("\n\n");
}
