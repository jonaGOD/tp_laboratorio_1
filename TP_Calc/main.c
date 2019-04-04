#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "TP_Calc.h"

int main()
{
    double x, y;
    char opcion;
    printf("Ingrese el primer operando: ");
    scanf("%lf",&x);
    printf("Ingrese el segundo operando: ");
    scanf("%lf",&y);

    printf("Ingrese la opcion a calcular\n a) Calcular la suma (%f+%f)\n b) Calcular la resta (%f-%f)\n c) Calcular la division (%f/%f)\n d) Calcular la multiplicacion (%f*%f)\n e) Calcular el factorial (%.f!)\n",x,y,x,y,x,y,x,y,x);
    scanf("%s",&opcion);
    opcion = tolower(opcion);

    if ((x < 0 && y < 0) && opcion == 'e') {
        printf("El factorial solo se calcula sobre numeros enteros positivos");
    } else {
        if (x < 0 && opcion == 'e') {
            printf("El factorial solo se calcula sobre numeros enteros positivos");
            printf("El de %.f! es %.f",x,factorial(x));
        } else {
            if (y < 0 && opcion == 'e') {
                printf("El factorial solo se calcula sobre numeros enteros positivos");
                printf("El de %.f! es %.f",y,factorial(y));
            } else {
                if (y == 0 && opcion == 'c') {
                    printf("No es posible dividir numeros por 0");
                } else {
                    switch(opcion) {
                    case 'a':
                        printf("El resultado de %f + %f es: %f",x,y,sumar(x,y));
                        break;
                    case 'b':
                        printf("El resultado de %f - %f es: %f",x,y,restar(x,y));
                        break;
                    case 'c':
                        printf("El resultado de %f / %f es: %f",x,y,dividir(x,y));
                        break;
                    case 'd':
                        printf("El resultado de %f * %f es: %f",x,y,multiplicar(x,y));
                        break;
                    case 'e':
                        printf("El factorial de %.f es: %.f y el factorial de %.f es: %.f",x,factorial(x),y,factorial(y));
                        break;
                    default:
                        printf("La opcion ingresada no es valida");
                    }
                }
            }
        }
    }
}
