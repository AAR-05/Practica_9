/* UTILIZANDO APUNTADORES */

#include <stdio.h>
int main ()
{
    char *ap, c = 'a'; // Se declara el apuntador ap de tipo alfanumérico
    ap = &c; //Se le asigna al apuntador la dirección de memoria de la variable c
    
    printf("Carácter: %c\n",*ap); /* Se imprime el contenido de la variable a la
    que apunta el apuntador ap */
    printf("Código ASCII: %d\n",*ap); /*Se imprime el código ASCII del carácter
    ‘a’ */
    printf("Dirección de memoria: %d\n",ap);/*Se imprime la dirección de
    memoria que almacena el apuntador*/
    return 0;
}


#include<stdio.h>
int main ()
{
    int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
    int *apEnt;
    apEnt = &a;
    
    printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
    printf("apEnt = &a\n");
    /*A la variable b se le asigna el contenido de la variable a la que
    apunta apEnt*/
    b = *apEnt;
    printf("b = *apEnt \t-> b = %i\n", b);
    /*A la variable b se le asigna el contenido de la variable a la que
    a   punta apEnt y se le suma uno*/
    b = *apEnt +1;
    printf("b = *apEnt + 1 \t-> b = %i\n", b);
    //La variable a la que apunta apEnt se le asigna el valor cero
    *apEnt = 0;
    printf("*apEnt = 0 \t-> a = %i\n", a);
    /*A apEnt se le asigna la dirección de memoria que tiene el elemento 0
    del arreglo c*/
    apEnt = &c[0];
    printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt);
    return 0;
}


#include <stdio.h>
int main ()
{
    int arr[] = {5, 4, 3, 2, 1};
    int *apArr;//Se declara el apuntador apArr
    int x;
    apArr = arr;
    
    printf("int arr[] = {5, 4, 3, 2, 1};\n");
    printf("apArr = &arr[0]\n");
    x = *apArr; /*A la variable x se le asigna el contenido del arreglo arr en
    su elemento 0*/
    printf("x = *apArr \t -> x = %d\n", x);
    x = *(apArr+1); /*A la variable x se le asigna el contenido del arreglo arr
    en su elemento 1*/
    printf("x = *(apArr+1) \t -> x = %d\n", x);
    x = *(apArr+2); /*A la variable x se le asigna el contenido del arreglo arr
    en su elemento 2*/
    printf("x = *(apArr+2) \t -> x = %d\n", x);
    x = *(apArr+3); /*A la variable x se le asigna el contenido del arreglo arr
    en su elemento 3*/
    printf("x = *(apArr+3) \t -> x = %d\n", x);
    x = *(apArr+4); /*A la variable x se le asigna el contenido del arreglo arr
    en su elemento 4*/
    printf("x = *(apArr+2) \t -> x = %d\n", x);
    return 0;
}

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

