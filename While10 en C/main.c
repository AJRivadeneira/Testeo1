#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumaPos = 0;
	int sumaNeg = 0;
	int contPos = 0;
	int contNeg = 0;
	int contCeros = 0;
	int contPares = 0;
	float promPos;
	float promNeg;
	int maximo;
	int flag = 0;
    int numero;
    char respuesta;

    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        if(numero > 0)
        {
            sumaPos += numero;
            contPos++;
        }
        else
        {
            if(numero < 0)
            {
                sumaNeg += numero;
                contNeg++;
            }
            else
            {
                contCeros++;
            }
        }
        if(numero %2 == 0)
        {
            contPares++;
        }
        if(flag == 0 || numero > maximo)
        {
            maximo = numero;
            flag= 1;
        }

        printf("Desea ingresar otro numero? s/n ");
        setbuf(stdin,NULL);
        scanf("%c", &respuesta);
    }
    while(respuesta == 's');

    promPos = (float)sumaPos / contPos;
	promNeg = (float)sumaNeg / contNeg;

    printf("La suma de los positivos es: %d\n", sumaPos);
    printf("La suma de los negativos es: %d\n", sumaNeg);
    printf("Cantidad de positivos: %d\n", contPos);
    printf("Cantidad de negativos: %d\n", contNeg);
    printf("Cantidad de ceros: %d\n", contCeros);
    printf("Cantidad de numeros pares: %d\n", contPares);
    printf("Promedio de positivos: %.2f\n", promPos);
    printf("Promedio de negativos: %.2f\n", promNeg);
    printf("Maximo %d\n", maximo);

    return 0;
}
