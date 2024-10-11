/* EMPLEANDO WHILE */

#include <stdio.h>
        
int main ()
{
    int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
    int indice = 0;
        
    printf("\tLista\n");
        while (indice < 5 ) // Acceso a cada elemento del arreglo unidimensional usando while
        {
            printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
            indice += 1; // Sentencia análoga a indice = indice + 1;
        }
    printf("\n");
    return 0;       
}

/* EMPLEANDO DO-WHILE */

#include <stdio.h>
int main ()
{
    int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
    int indice = 0;
        
    printf("\tLista\n");
        do // Acceso a cada elemento del arreglo unidimensional usando do-while
        {
            printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
            indice += 1; // Sentencia análoga a indice = indice + 1;
        } while (indice < 5 );
    printf("\n");
    return 0;
}

/* EMPLEANDO FOR */

#include <stdio.h>
int main ()
{
    int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
    int indice=0;
        
    printf("\tLista\n");
    // Acceso a cada elemento del arreglo unidimensional usando for
        for (indice = 0 ; indice < 5 ; indice++)
        {
            printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
        }
    printf("\n");
    return 0;
}
    
// FOR 10 elementos

#include <stdio.h>
int main ()
{
    int lista[10]; // Se declara el arreglo unidimensional
    int indice=0;
    int numeroElementos=0;
    
    printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
    scanf("%d",&numeroElementos);
        if((numeroElementos>=1) && (numeroElementos<=10))
        {
            // Se almacena un número en cada elemento del arreglo unidimensional usando for
            for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
            {
                printf("\nDar un número entero para el elemento %d del arreglo", indice );
                scanf("%d",&lista[indice]);
            }
            printf("\nLos valores dados son: \n");
            // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
                for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
                {
                    printf("%d ", lista[indice] );
                }
        }
        else printf("el valor dado no es válido");
    printf("\n");
    return 0;
}
