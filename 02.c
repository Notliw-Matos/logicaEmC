// F — Escreva um programa que leia duas notas double válidas de 0 a 10 e mostre a média. Verifique a leitura.

#include <stdio.h>
#include <stdlib.h>

int main(){
	double nota1, nota2, media;
	
	puts("Primeira nota:");
	scanf("%lf",&nota1);
	if(nota1 > 10 || nota1 < 0) {
		puts("Valor invalido.");
		return 1;
	}	
	puts("Segunda nota:");
	scanf("%lf",&nota2);
	if(nota2 > 10 || nota2 < 0){
		puts("Valor invalido.");
		return 1;	
	}
	
	media = (nota1 + nota2) / 2;
	
	printf("Media das notas: %f\n",media);
}
