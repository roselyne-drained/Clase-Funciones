//
// Created by Roselyne on 09/11/2024.
//
#include <stdio.h>
#include <stdlib.h>

//Declarar Funciones.
//Son funciones sin pase de parametros y sin retorno.
int Opcion1();
int Opcion2();
int Opcion3();
int Opcion4();


int main(void)
{
    /*Declarar variables*/
    int menu = 0;
    int num = 0;
    int pares = 0;
    int intentos = 0;
    int suma = 0;

    //Inicio
    do
    {
        //Bienvenida al usuario.
        printf("Bienvenido usuario.\n");
        printf("Seleccione por favor la operacion a realizar\n");
        printf("1. Ingresar 5 numeros y contar los que sean pares.\n");
        printf("2. Ingresar 5 numeros y sumar los pares.\n");
        printf("3. Ingresar 5 numeros y mencionar si algun numero es par.\n");
        printf("4. Salir.\n");//Esta opcion le da salida al usuario.
        scanf(" %d", &menu);

        //Menu
        switch (menu)
        {
            //Esta opcion hace que el usuario introduzca 5 numeros y cuente los pares.
            case 1:
                Opcion1();
                printf("El valor de retorno es %d\n", pares);
                break;
            //Esta opcion hace que el usuario introduzca 5 numeros y sume los que sean pares.
            case 2:
                Opcion2();
                printf("El valor de retorno es %d\n", suma);
                break;
            //Esta opcion hace que el usuario introduzca 5 numeros e indique si se ha introducido algun numero par.
            case 3:
                Opcion3();
                if (Hay_Pares != 0)
                {
                    printf("El valor de retorno es hay pares.\n");
                } else
                {
                    printf("El valor de retorno es no hay pares.\n");
                }
                break;

            case 4:
                Opcion4();
                break;
        default:
            printf("Operacion invalida\n");
        }
    }while (menu != 4);
    printf("Fin del programa. Hasta luego R. XP\n");
}

//Definir funciones.

//Funcion 1
int Opcion1()
{
    int intentos = 0;
    int pares = 0;
    int num = 0;
    do
    {

        printf("Ingrese un numero:\n");
        scanf(" %d", &num);
        intentos++;
        if (num % 2 == 0)
        {
            pares++;
        }
    } while (intentos < 5);

    printf("Ingresaste %d numeros pares.\n", pares);
    return pares;
}

//Funcion 2
int Opcion2()
{
    int intentos = 0;
    int suma = 0;
    int num = 0;
    do
    {
        printf("Ingresa un numero:\n");
        scanf(" %d", &num);
        intentos++;
        if (num % 2 == 0)
        {
            suma = suma + num;
        }
    } while (intentos < 5);
    printf("La suma de los numeros pares es:%d\n", suma);
    return suma;
}

//Funcion 3
int Opcion3()
{
    int intentos = 0;
    int num = 0;
    int pares = 0;
    int Hay_Pares = 0;
    do
    {
        printf("Ingresa un numero:\n");
        scanf(" %d", &num);
        intentos++;
        if (num % 2 == 0)
        {
            pares++;
        }
    } while (intentos < 5);
    if (pares != 0)
    {
        Hay_Pares = Hay_Pares + 1;
        printf("Si hubo un numero par.\n");
    } else
    {
        printf("No hubo numeros par.\n");
    }
    return Hay_Pares;
}

//Funcion 4
int Opcion4()
{
    printf("Saliendo del programa.....\n");
    return 0;
}