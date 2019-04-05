#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
/*
    Programa: Calculadora.

    Objetivo:

        Realizar la operacion elegida por el usuario,
        e ingresar dos datos numericos, A y B, para realizar dicha operacion.

*/




    int A=0, B=0; // Los datos numericos enteros, A y B.
    int resultado=0, resultadoB=0; // Guardo en dos variables, 'resultadoA' y 'resultadoB', para sacar el factorial.
    double resultadoDiv=0; // Es un resultado de la operacion 'division', por el tipo de dato particular.
    int opcion;
    do{
    mostrarMenu();
    scanf("%d",&opcion);
    if (opcion == 6) // Sale del programa con la opcion elegida, '6'.
        {
        break;
        }
    pedirDato(A);
    scanf("%d",&A);
    pedirDato(B);
    scanf("%d",&B);
    switch (opcion)
    {
    case 1:
            resultado= sumar(A,B);
            printf("El resultado de %d+%d es: %d", A, B,resultado);
            break;
    case 2:
            resultado= restar(A,B);
            printf(" El resultado de %d-%d es: %d",A,B,resultado);
            break;
    case 3:
            if (B != 0){
            resultadoDiv = (float)dividir(A,B);
            printf(" El resultado de %d/%d es: %f\n",A,B,resultadoDiv);
            }
            else{
                printf("No es posible dividir por cero");
            }
            break;
    case 4:
            resultado= multiplicar(A,B);
            printf(" El resultado de %d*%d es: %d",A,B,resultado);
            break;
    case 5:
            if (A>0 && B > 0){
            resultado= factorial(A);
            resultadoB= factorial(B);
            printf("“El factorial de %d es: %d y El factorial de %d es: %d",A,resultado,B,resultadoB);
            }
            else {
                printf("No es posible sacar el factorial de un numero negativo");
            }
            break;
    }
    continuarOSalir(opcion);
    scanf("%d",&opcion);
    fflush(stdin);

    }while (opcion != 0);

}
