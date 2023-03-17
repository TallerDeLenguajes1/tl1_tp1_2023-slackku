#include <stdio.h>

int cuadrado(int a);
void cuadradoVoid(int *a);
void Invertir(int *a, int *b);
void orden(int *a, int *b);
void solicitarDatos(int *a, int *b);

void main()
{
    int a, b, *p_a, *p_b, c, d;
    p_a = &a;
    p_b = &b;
    fflush(stdin);
    printf("-- Ingresar valores distintos --\n");
    printf("Ingrese un valor para a: ");
    scanf("%d", &a);
    printf("Ingrese un valor para b: ");
    scanf("%d", &b);

    printf("Valor de variable a: %d\n", a);
    printf("Valor de variable b: %d\n", b);
    printf("Direccion de a: %d\n", &a);
    printf("Direccion de b: %d\n", &b);

    printf("-- Cuadrados --\n");
    printf("[Retorno int]\n");
    c = cuadrado(a);
    d = cuadrado(b);
    printf("El cuadrado de a es: %d\n", c);
    printf("El cuadrado de b es: %d\n", d);

    printf("Valor de variable a: %d\n", a);
    printf("Valor de variable b: %d\n", b);

    printf("[Retorno void]\n");

    cuadradoVoid(p_a);
    cuadradoVoid(p_b);
    printf("El cuadrado de a es: %d\n", a);
    printf("El cuadrado de b es: %d\n", b);

    printf("Valor de variable a: %d\n", a);
    printf("Valor de variable b: %d\n", b);

    Invertir(p_b, p_a);
    printf("-- Invertir --\n");

    printf("Valor de variable a: %d\n", a);
    printf("Valor de variable b: %d\n", b);

    orden(p_a, p_b);

    printf("-- Orden --\n");

    printf("[Supuesto Mayor] Valor de variable a: %d\n", a);
    printf("[Supuesto Menor] Valor de variable b: %d\n", b);

    printf("-- Resultado final --\n");
    printf("Valor de variable a: %d\n", a);
    printf("Valor de variable b: %d\n", b);
    printf("Direccion de a: %d\n", &a);
    printf("Direccion de b: %d\n", &b);
}

int cuadrado(int a)
{
    return a * a;
}

void cuadradoVoid(int *a)
{
    int b = *a;
    *a = b * b;
}

void Invertir(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    int aux = *a;
    if (*a < *b)
    {
        *a = *b;
        *b = aux;
    }
}