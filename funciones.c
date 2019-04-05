#include <stdio.h>
#include <stdlib.h>

int sumar (int x, int y)
{

    return x + y;

}

int restar(int x, int y)
{

    return x - y;

}
int multiplicar (int x, int y)
{

    return x * y;

}
float dividir (int x, int y)
{


    return (float)x / (float)y;


}
int factorial (int x)
{

    int acum= 1, i;
    for(i = 1 ; i <= x; i++)
        {

        acum = acum * i;
        }

    return acum;

}
int mostrarMenu (void)
{
    printf("Elige una opcion:\n"
           "1)sumar un numero A con un numero B\n"
           "2)restar un numero A con un numero "
           "B\n3)dividir un numero A con un numero B\n"
           "4)multiplicar un numero A por un numero B\n"
           "5)Sacar el factorial de un numero A y un numero B\n"
           "6)salir\nIngrese una opcion:");

}
int pedirDato (int x)
{
    printf("Ingrese un numero:", x);

}

int continuarOSalir (int x)
{

    printf("\nDesea continuar? '1' para seguir y '0' para salir:",x);

}
