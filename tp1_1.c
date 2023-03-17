#include <stdio.h>

void main()
{
    int a = 69, *pa;
    pa = &a;
    printf("Contenido del puntero: %d\n", *pa);
    printf("Direccion de memoria almacenada por el puntero: %d\n", pa);
    printf("Direccion de memoria de la variable a: %d\n", &a);
    printf("Direccion de memoria del puntero: %d\n", &pa);
    printf("Espacio que ocupa en memoria la variable a: %d\n", sizeof(a));
}