//
// Created by usuario on 09/11/2024.
//
#include <stdio.h>

//Declarar funciones.
int Suma();
void Resta();
void Multiplicacion();
void Division();

//Main.
int main(void)
{
    int resultado;
    resultado = Suma();
    printf("El valor de retorno es: %d\n", resultado);
}
//Definir funciones.

/*Para que me pueda devolver algun valor o algun dato todos los tipos de valor deben coincidir
 *Por ejemplo Int con Int, float con float, char con char, etc.
 */

int Suma()
{
    int a, b;
    printf("Ingrese un numero:\n");
    scanf(" %d", &a);
    printf("Ingrese un numero:\n");
    scanf(" %d", &b);
    int c = a + b;
    printf("El resultado de la suma es: %d\n", c);
    return c;
}