#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*  strlen ---> Longitud de cadena 

    strcpy  ---> Copiar cadena

    strcat ----> Concatenar cadenas

    strcmp ----> Comparar cadenas
*/


/// FUNCIONES QUE OPERAN SOBRE STRINGS.

int main(){

    char cadena[10] = "Raul";              /// Declaramos una cadena de caracteres, con un maximo de 10 elementos pero solo utilizamos 4.

    char cadena3[10] = "Raulcito";

    printf("El largo de la cadena es %d\n", strlen(cadena)); /// Con la foncion strlen

    char cadena1[10];

    char cadena2[10] = "cito";

    strcpy(cadena1, cadena); /// Copiamos  lo que esta en en Cadena, a Cadena 1.

    printf("Cadena 1: %s\n", cadena1);


    strcat(cadena, cadena2);    // Copia el segundo parametro enviado, concatenandolo en la primer cadena.

    printf("Cadena: %s\n", cadena);

                                        // Strcmp Compara si las cadenas son o no son iguales.
    if (strcmp(cadena, cadena3) == 0){  
        printf("Las cadenas son iguales\n");
    }
    else{
       printf("Las Cadenas son diferentes\n");
    }
    
    return 0;
}