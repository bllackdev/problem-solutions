/*
Autor: Raphael Renato
Problema: Desenvolver um programa que dada a entrada de
uma string, mostre-a totalmente em maiúscula,
depois totalmente em minúscula e por último mostre
a string original.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char frase[30], a[30], b[30];
	int tamanho, i;
	
	printf("Digite uma String: ");
	gets(frase);
	tamanho = strlen(frase); //pega o tamanho da String (só o que foi digitado)
	
	for(i=0; i<tamanho;i++){
		a[i] = toupper(frase[i]); //Converte a string em MAIUSCULO, pegando cada letra
								  //da frase. 	
		b[i] = tolower(frase[i]); //Converte a string em MINUSCULO, pegando cada letra
								  //da frase.
		 
	}
	printf("\nString em Maiusculo: %s\n", a);
	printf("\nString em Minusculo: %s\n", b);
	printf("\nString Original: %s\n", frase);

	return 0;
}
