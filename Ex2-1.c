
/* EMPLEANDO FOR */
#include <stdio.h>
int main ()
{
    int lista[5] = {10, 8, 5, 8, 7};
    int *ap = lista; //Se declara el apuntador ap
    int indice;
    
    printf("\tLista\n");
    //Se accede a cada elemento del arreglo haciendo uso del ciclo for
        for (indice = 0 ; indice < 5 ; indice++)
        {
            printf("\nCalificación del alumno %d es %d", indice+1,
            *(ap+indice));
        }
    printf("\n");
    return 0;
}
