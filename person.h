//Universidad de Costa Rica
//IE-0117 Programacion bajo plataformas abiertas
//Profesora: Carolina Trejos
//Estudiante: Enrique Zamora Solis
//Laboratorio Opcional

#ifndef PERSON_H
#define PERSON_H

typedef struct {
    char name[50];
    int age;
    double height;
} Person;

// Función para imprimir una lista de personas
void print_persons(const Person persons[], int size);

#endif // PERSON_H
