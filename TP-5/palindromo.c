#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0
#define MAX 10


char espalindromo(char palabra[MAX])
{

    int resul;
    int posi = 0;
    int posf = strlen(palabra) - 1;
    
    while(palabra[posi] == palabra[posf])
	{
	    posi += 1;
	    posf -= 1 ;
	}
	if(posi >= posf)
	{
    	resul = TRUE;
	}
	else
	{
        resul = FALSE;
    }
    return resul;
}


int main()
{
    char palabra[MAX];
    
    printf("Ingrese la palabra o frase: \n");
    scanf("%s",&palabra);
    char llamada = espalindromo(palabra);
    
    if("%i",llamada == TRUE)
    {
        printf("Es Palindromo");
    }
    else
    {
        printf("No lo es");
    }
}
