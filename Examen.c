//
// Created by Roselyne on 09/11/2024.
//
#include <ctype.h>
#include <stdio.h>


int main(void) {
   //Como siempre primero declaramos variables.
   int opcion_menu1;
   float calificacion1 = 0;
   float calificacion2 = 0;
   float calificacion3 = 0;
   float calificacion4 = 0;
   float calificacion5 = 0;
   char caracter1;
   char caracter2;
   int numero;
    char continuar;



    do
    {
        //Le damos la bienvenida al estudiante.
        printf("Bienvenido usuario\n");
        //Le proporcionamos un menu dependiendo de lo que quiere puede realizar un proceso distinto.
        printf("Por favor seleccione la opcion deseada:\n");
        printf("1. Sacar el promedio de 5 calificaciones\n");
        printf("2. Capturar 2 caracteres y determinar si son 'Iguales','mayusculas','numeros' u 'otro' y mostrar su ASCII\n");
        printf("3. Determinar si un numero es negativo y divisble entre 4.\n");
        printf("4. Salir.\n");
        scanf("%d", &opcion_menu1);




        //Inicio del programa.
        switch (opcion_menu1) {


            //El usuario desea sacar el promedio de 5 calificaciones.
        case 1:
            //Preguntamos la pimer calificacion
            printf("Ingrese su primera calificacion por favor:\n");
            scanf("%f", &calificacion1);
            //Preguntamos la segunda calificacion
            printf("Ingrese su segunda calificacion por favor:\n");
            scanf("%f", &calificacion2);
            //Preguntamos la tercer calificacion
            printf("Ingrese su tercera calificacion por favor:\n");
            scanf("%f", &calificacion3);
            //Preguntamos la cuarta calificacion
            printf("Ingrese su cuarta calificacion por favor:\n");
            scanf("%f", &calificacion4);
            //Preguntamos la quinta calificaion
            printf("Ingrese su quinta calificacion por favor:\n");
            scanf("%f", &calificacion5);
            //Sacamos el promedio.
            float promedio = (calificacion1 + calificacion2 + calificacion3 + calificacion4 + calificacion5) / 5;
            //Se lo hacemos saber al usuario.
            printf("El promedio es: %.2f\n", promedio);
            break;


            //El usuario ingresa dos caracteres.
        case 2:
            //Le pedimos los dos caracteres.
                printf("Por favor introduzca el primer caracter:\n");
            scanf(" %c", &caracter1);
            printf("Por favor introduzca el segundo caracter:\n");
            scanf(" %c", &caracter2);


            //Comprobamos si son iguales
            if (caracter1 == caracter2) {
                printf("Los caracteres son iguales\n");
            } else {
                printf("Los caracteres son diferentes\n");
            }


            //Comprobamos si son mayúsculas
            if (isupper(caracter1)) {
                printf("El primer caracter '%c' es una mayuscula\n", caracter1);
            } else {
                printf("El primer caracter '%c' no es una mayuscula\n", caracter1);
            }


            if (isupper(caracter2)) {
                printf("El segundo caracter '%c' es una mayuscula\n", caracter2);
            } else {
                printf("El segundo caracter '%c' no es una mayuscula\n", caracter2);
            }


            //Verificar si son números
            if (isdigit(caracter1)) {
                printf("El primer caracter '%c' es un numero\n", caracter1);
            } else {
                printf("El primer caracter '%c' no es un numero\n", caracter1);
            }


            if (isdigit(caracter2)) {
                printf("El segundo caracter '%c' es un numero\n", caracter2);
            } else {
                printf("El segundo caracter '%c' no es un numero\n", caracter2);
            }


            //Verificar si son otros caracteres
            if (!isupper(caracter1) && !isdigit(caracter1)) {
                printf("El primer caracter '%c' es otro\n", caracter1);
            }


            if (!isupper(caracter2) && !isdigit(caracter2)) {
                printf("El segundo caracter '%c' es otro\n", caracter2);
            }


            //Mostramos sus codigos ASCII de los caracteres ingresados
            printf("El codigo ASCII de '%c' es:%d\n", caracter1, (int)caracter1);
            printf("El codigo ASCII de '%c' es:%d\n", caracter2, (int)caracter2);
            break;


            //Determinar si un numero es negativo y divisible entre 4.
        case 3:
            printf("Por favor ingrese el numero que desea analizar:\n");
            scanf("%d", &numero);


            //Numero negativo y divisble entre 4, Caso ideal.
            if (numero < 0) {
                if (numero % 4 == 0) {
                    printf("El numero que usted ingreso es negativo y divisble entre 4.\n");
                } else {
                    printf("El numero que usted ingreso es negativo e indivisble entre 4.\n");
                }
            }else {
                if (numero % 4 == 0) {
                    printf("El numero que usted ingreso es positivo y divisble entre 4.\n");
                }
                else {
                    printf("El numero que usted ingreso es positivo e indivisble entre 4\n");
                }
            }
            break;


        case 4:
            printf("Ha decidido salir del programa.\n");
            break;


        default:
            printf("Opcion no valida\n");
            break;
        }
        printf("Deseas continuar?(s/n)\n");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
       printf("Programa finalizado............\n");
       printf("Hasta luego R. xP\n");
}

