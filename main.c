//Universidad de Costa Rica
//IE-0117 Programacion bajo plataformas abiertas
//Profesora: Carolina Trejos
//Estudiante: Enrique Zamora Solis
//Laboratorio Opcional

#include <stdio.h>
#include <stdlib.h>
#include "person.h"
#include "sort.h"

int main() {
    Person persons[] = {
        {"Adriana", 30, 165.5},
        {"Braulio", 25, 175.2},
        {"Carlos", 35, 180.3},
        {"David", 28, 160.4},
        {"Enrique", 22, 170.0}
    };
    int size = sizeof(persons) / sizeof(persons[0]);

    printf("Ordenamiento alfabetico:\n");
    qsort(persons, size, sizeof(Person), compare_by_name);
    print_persons(persons, size);

    printf("Ordenamiento ascendente por edad:\n");
    qsort(persons, size, sizeof(Person), compare_by_age);
    print_persons(persons, size);

    printf("Ordenamiento ascendente por altura:\n");
    qsort(persons, size, sizeof(Person), compare_by_height);
    print_persons(persons, size);

    return 0;
}
