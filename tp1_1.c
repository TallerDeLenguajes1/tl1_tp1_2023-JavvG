/* Granero Javier - Marzo 19 */

#include <stdio.h>
#include <conio.h>

void main() {

    int num = 123;
    int *p_num = &num;

    printf("Hola Mundo!");

    getch();
    
    printf("\n >> Este es el contenido del puntero: %d", *p_num);
    printf("\n >> Esta es la direcci%cn de memoria almacenada en el puntero: %d", 162, p_num);
    printf("\n >> Esta es la direcci%cn de memoria de la variable apuntada: %d", 162, &num);
    printf("\n >> Esta es la direcci%cn de memoria del puntero: %d", 162, &p_num);
    printf("\n >> Este es el tama%co de memoria usado por la variable: %lu (bytes)", 164, sizeof(num));

    getch();
}