/*
 ============================================================================
 Name        : Recu.c
 Author      : DELLE CHIAIE MAURO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y
 muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia
 y que acumule estos a los que ya tiene el país.
  La función no devuelve nada.


2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro  y su
 responsabilidad es invertir los caracteres de la misma.
 Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU


3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
 y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
 Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);
typedef struct{

	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;

}ePais;

void actualizarRecuperados(ePais lista[]);


int main(void) {

	setbuf(stdout,NULL);



	return EXIT_SUCCESS;
}

//2
void invertirCadena(char cadena[])
{
    int longitud;
    int i;
    char swap;
    longitud = strlen(cadena);

    for (i = 0; i < strlen(cadena) / 2; i++)
    {
        swap = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = swap;
    }
}

//3
void ordenarCaracteres(char cadena[])
{
	int n;
	printf("Ingrese cantidad de nombres a ingresar: ");

	scanf("%d",&n);
	char s[n-1][20],aux[20];
	int i,j;
	float comp;

	for(i=0;i<n;i++)
	{
	                 printf("Ingrese un nombre: \n");
	                 scanf("%s",s[i]);
	}
	system("cls");
	for(i=0;i<n;i++)
	{
	                 for(j=0;j<n-i;j++)
	                 {
	                                  comp = strcmp( s[j], s[j+1] );
	                                  if(comp > 0)
	                                  {
	                                         strcpy(aux,s[j]);
	                                         strcpy(s[j],s[j+1]);
	                                         strcpy(s[j+1],aux);
	                                  }
	                 }
	}
	printf("Los nombres ordenados alfabeticamente son: \n");
	for(i=0;i<n;i++)
	{
	                 printf("%d.- %s \n",i+1,s[i]);
	}
	system("PAUSE");
	}









