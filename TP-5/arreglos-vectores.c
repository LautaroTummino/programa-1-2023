/*
Trabajo Practico 2 - Arreglos
Lautaro Tummino - GitHub @LautaroTummino
Programacion 1 - Ingenieria en Computacion
*/

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define MAX 10

void cargararreglo(int arreglo[], int cantidad)
{
/*
Esta funcion se encarga de ingresar un arreglo.
*/
    for(int i = 0; i < cantidad;i++)
    {
        printf("Ingrese un Numero: "); scanf("%d", &arreglo[i]);
    }
}

void mostrararreglo(int arreglo[], int cantidad)
{

/*
Esta funcion se encarga de imprimir-mostrar el arrelgo ingresado
*/
    for (int i = 0; i < cantidad;i++)
    {
        printf("\nPosicion %d Numero = %d", i, arreglo[i]);
	printf("\n---------------------");
    }
}

void cambiandoposicion(int arreglo[], int posicion)
{
    
/*
Esta funcion se encarga de cambiar el valor de un elemento del arreglo
*/
    int cantidad = MAX;
    int i;
    int valor;

    printf("\nIngrese una posicion para cambiar el valor: ");
    scanf("%i", &posicion);
    printf("\nIngres el valor que quiere poner en esa posicion: ");
    scanf("%i", &valor);

    if (posicion <= cantidad)
    {
        arreglo[posicion] = valor;
        printf("Cambiaste el valor de la posicion %i, por el numero %i", posicion, valor);
        for(i = 0; i < cantidad; i ++)
        {
            printf("\nPosicion %d Numero = %d", i, arreglo[i]);
            printf("\n---------------------");
        }
    }
    if(posicion > cantidad)
    {
        printf("Valor fuera de rango, imposible cambiar el elemento");
    }

}

int main() {

    int posicion;
    int cantidad = MAX;
    int arreglo[cantidad];
    
    cargararreglo(arreglo, cantidad);
    mostrararreglo(arreglo, cantidad);
    cambiandoposicion(arreglo, posicion);

    return 0;
}