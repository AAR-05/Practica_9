
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

/* EMPLEANDO while */

#include <stdio.h>
int main ()
{
    int lista[5] = {10, 8, 5, 8, 7};
    int *ap = lista; //Se declara el apuntador ap
    int indice = 0;
    printf("\tLista\n");
    //Se accede a cada elemento del arreglo haciendo uso del ciclo while
        while (indice < 5);
        {
            printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
            indice++;
        }
    printf("\n");
    return 0;
}

/* EMPLEANDO DO-WHILE */

#include <stdio.h>
int main ()
{
    int lista[5] = {10, 8, 5, 8, 7};
    int *ap = lista; //Se declara el apuntador ap
    int indice = 0;
    
    printf("\tLista\n");
    //Se accede a cada elemento del arreglo haciendo uso del ciclo do-while
        do
        {   
            printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
            indice++;
        }while (indice < 5)
    printf("\n");
    return 0;
}

/* APUNTADORES EN CADENA */

#include <stdio.h>
int main()
{
    char palabra[20];
    int i=0;
    
    printf("Ingrese una palabra: ");
    scanf("%s", palabra); /* Se omite & porque el propio nombre del arreglo de
    tipo cadena apunta, es decir, es equivalente a la dirección de comienzo del
    propio arreglo*/
    printf("La palabra ingresada es: %s\n", palabra);
        for (i = 0 ; i < 20 ; i++)
        {
            printf("%c\n", palabra[i]);
        }
    return 0;
}
