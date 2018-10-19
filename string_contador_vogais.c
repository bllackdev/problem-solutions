/*
Autor: Raphael Renato
Problema: Desenvolver um programa que dada uma
determinada string, conte quantas vogais existem.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h> //biblioteca para manipulação de caracteres

int main(){
	char frase[30]; // a[30];
	int tamanho, i, cont;
	cont=0;
	printf("Digite uma String: ");
	gets(frase);
	tamanho = strlen(frase); //pega o tamanho da String (só o que foi digitado)
	
	for(i=0; i<tamanho;i++){ //loop por verificar caracteres um por um
		if (frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o'||frase[i]=='u') //Verifica as vogais
			cont= cont + 1; //contador de vogais		
	}
	printf("Total de vogais em '%s': %d\n", frase, cont);

	return 0;
}
