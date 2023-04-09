#include <stdio.h>


/* Palindromo Con Recursividad. Si la cadena tiene 1 caracter. el palindromo es VERDADERO para todos los demas casos
trabajaremos con la recursividad, haciendo que el primer caracter de nuestra cadena se compare con el ultimo*/


int palindromorecursivo(char * cadena, int indiceinicial, int indicefinal) {
 
    // Si llegamos hasta aquí es porque ya sólo queda un carácter,
    // y por lo tanto no se puede comparar con otro
    // Esto también comprueba si la cadena tiene uno o menos caracteres
    if (indiceinicial >= indicefinal) return 1;
 
    // Sólo para explicar la comparación que se hace
    printf("Comparando %c con %c\n", cadena[indiceinicial], cadena[indicefinal]);
 
    // Si no, entonces comparamos el primer y último carácter
    if (cadena[indiceinicial] == cadena[indicefinal]) {
        // En caso de que sí, vamos por buen camino. Ahora cortamos la cadena desde inicio + 1 hasta fin - 1
        return palindromorecursivo(cadena, indiceinicial + 1, indicefinal - 1);
    } else {
        // Si no eran iguales los carácteres al inicio y fin, entonces desde ahí se termina la recursión
        // y se regresa 0
        return 0;
    }
}


int main(){

    int llamada;
    int longitudcadena;    
    char cadena[30];

    printf("Escribe una cadena de menos de 30 caracteres: ");
    scanf("%s", &cadena);
    

    longitudcadena = strlen(cadena);
    
    llamada = palindromorecursivo(cadena, 0, longitudcadena -1);

    if(palindromorecursivo){
        printf("La cadena %s, es palindromo", cadena);
    }
    else{
        printf("La cadena %s, es palindromo", cadena);
    }



    return 0;
}
