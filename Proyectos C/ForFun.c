#include <stdio.h>
//Funciones secundarias
void curricular();
void Introduccion();
// Fin de funciones secundarias

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
    fflush(stdin);
    printf("\n");

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
    printf("Bienvenido a la funcion de long \n");
}

void shortF()
{
    printf("Bienvenido a la funcion de Short \n");
}

void saberF()
{
    int Saberes;
    printf("En este apartado vas a ver datos generales del curso \n");
    printf("Como puedes ver no tengo interfaz, pero la info te puede servir \n");
    printf("Quizas luego agregue alguna interfaz... \n");
    printf("ESCOGE una opcion que quieras ver, todo es pura informacion \n");

    do 
    {
        Saberes;
        printf(" \n 1.- Introduccion \n");
        printf("2.- Elementos de lenguaje \n");
        printf("3.- Modificador y tamanio de datos \n");
        printf("4.- Bits y bytes \n");
        printf("5.- Standard Input \n");
        printf("6.- Operadores \n");
        printf("7.- Operadores de bits \n");
        printf("8.- Control de flujo IF \n");
        fflush(stdout);
        scanf("%d", &Saberes);
        fflush(stdin);

        switch (Saberes)
        {
        case 1:
            Introduccion();
            break;
        }

    }
    while (Saberes != 10);
    


}


  /* ========================================== Fin de funciones ========================================== */


   /* ========================================== Programa principal ========================================== */

int main () 
{
    int numero;
    int seleccion;

    do 
    {
    numero = imprimir();

    switch (numero)
    {
    case 1:
        charF();
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

    }
    while(numero != 7);

    return 0;
}


/* ======================== Variables secundarias ======================== */

// FUNCIONES PARA SABER MAS ... Introduccion

void Introduccion()
{
    int MenIntr;

    do{
    MenIntr;
    printf("\n Escoge una Opcion \n");
    printf(" 1.- Contexto Curricular \n ");
    printf(" 2.- Programacion Estructurada \n");
    printf(" 3.- Lenguaje C \n");
    printf(" 4.- Etapas de la programacion \n");
    printf(" 5.- Salir \n");
    fflush(stdout);
    scanf("%d", &MenIntr);
    fflush(stdin);
    }
    while (MenIntr != 5);
    
}


void curricular()
{
    printf("Esta es una wea curricular");
}

// FIN DE FUNCIONES SABER MAS ... Introduccion