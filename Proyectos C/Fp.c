#include <stdio.h>


  /* ========================================== Inicio de funciones ========================================== */

int imprimir ()
{
      int seleccion;
 
    printf(" \n Seleccione el tipo de dato \n");
    printf("1.- char \n");
    printf("2.- int \n");
    printf("3.- float \n");
    printf("4.- long \n");
    printf("5.- short \n");
    printf("6.- Saber mas... \n");
    printf("7.- Salir \n");
    scanf("%d" , &seleccion);
    printf("\n");
    printf("Seleccion es %d \n", seleccion);


    return seleccion;
}


void charF()
{
    printf("Bienvenido a la funcion de Char \n");
}

void intF()
{
    printf("Bienvenido a la funcion de Int \n");
}


void floatF()
{
    printf("Bienvenido a la funcion de float \n");
}

void longF()
{
    printf("Bienvenido a lla funcion de long \n");
}

void shortF()
{
    printf("Bienvenido a la funcion de Short \n");
}

void saberF()
{
    printf("Saber mas... \n");
}


  /* ========================================== Fin de funciones ========================================== */


   /* ========================================== Programa principal ========================================== */

int main () 
{
    int numero;
    int seleccion;

    do 
    {
    numero = imprimir(seleccion);

    switch (numero)
    {
        case 1:
        charF(numero);
        break;
    
        case 2:
        intF();
        break;

        case 3:
        floatF();
        break;

        case 4:
        longF();
        break;

        case 5:
        shortF();
        break;

        case 6:
        saberF();
        break;

    }


    } while(numero != 7);

    printf("Hasta la proxima \n");


    return 0;
}