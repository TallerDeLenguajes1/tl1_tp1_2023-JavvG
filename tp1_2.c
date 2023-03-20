/* Granero Javier - Marzo 19 */

#include <stdio.h>
#include <conio.h>

/* Declaración de funciones */

int cuadrado_num(int num);
void cuadrado_num_1(int num, int* result);
void invertir(int *a, int *b);
void orden(int *x, int *y);


/* Programa principal */

void main() {

    int num, result, variable;

    printf(" > Ingrese un n%cmero: ", 163);
    scanf("%d", &num);

    printf("\n >> Este es el cuadrado del n%cmero ingresado: %d", 163, cuadrado_num(num));       /* Usando función con retorno de valor real, conforme al punto 4.a */

    getch();

    /* ---------- */

    printf("\n\n > Ingrese otro n%cmero: ", 163);
    scanf("%d", &num);

    cuadrado_num_1(num, &result);

    printf("\n >> Este es el cuadrado del n%cmero ingresado: %d", 163, result);       /* Usando función sin retorno de valor, pero usando puntero, conforme al punto 4.b */

    getch();

    /* ---------- */

    printf("\n\n > Ingrese un nuevo n%cmero: ", 163);
    scanf("%d", &variable);
    printf("\n >> Esta es la direcci%cn de memoria de la variable ingresada: %d \n >> Este es su contenido: %d", 162, &variable, variable);     /* Conforme al punto 4.c */

    getch();

    /* ---------- */

    int a, b;

    printf("\n\n > Ingrese dos n%cmeros para invertir de orden: ", 163);
    printf("\n\t > Primer n%cmero: ", 163);
    scanf("%d", &a);
    printf("\t > Segundo n%cmero: ", 163);
    scanf("%d", &b);
    
    invertir(&a, &b);       /* Uso de función conforme al punto 4.d y 4.f */

    printf("\n\n >> Estos son los n%cmeros en orden invertido: ", 163);
    printf("\n\t >> Primer n%cmero: %d", 163, a);
    printf("\n\t >> Segundo n%cmero: %d", 163, b);

    getch();

    /* ---------- */

    int x, y;

    printf("\n\n > Ingrese dos n%cmeros para invertir de orden: ", 163);
    printf("\n\t > Primer n%cmero: ", 163);
    scanf("%d", &x);
    printf("\t > Segundo n%cmero: ", 163);
    scanf("%d", &y);
    
    orden(&x, &y);       /* Uso de función conforme al punto 4.e y 4.f */

    printf("\n\n >> Estos son los n%cmeros en orden ascendente: ", 163);
    printf("\n\t >> Menor n%cmero: %d", 163, x);
    printf("\n\t >> Mayor n%cmero: %d", 163, y);

    getch();

}


/* Desarrollo de funciones */

int cuadrado_num(int num) {
    return num*num;
}

void cuadrado_num_1(int num, int *result) {
    *result = num*num;
}

void invertir(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *x, int *y) {
    if(*x > *y) {
        invertir(x, y);
    }
}