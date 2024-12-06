//Universidad de Costa Rica
//IE-0117 Programacion bajo plataformas abiertas
//Profesora: Carolina Trejos
//Estudiante: Enrique Zamora Solis
//Laboratorio Opcional

#include <string.h>
#include "sort.h"

int compare_by_name(const void *a, const void *b) {
    const Person *p1 = (const Person *)a;
    const Person *p2 = (const Person *)b;
    return strcmp(p1->name, p2->name);
}

int compare_by_age(const void *a, const void *b) {
    const Person *p1 = (const Person *)a;
    const Person *p2 = (const Person *)b;
    return p1->age - p2->age;
}

int compare_by_height(const void *a, const void *b) {
    const Person *p1 = (const Person *)a;
    const Person *p2 = (const Person *)b;
    if (p1->height < p2->height) return -1;
    if (p1->height > p2->height) return 1;
    return 0;
}
