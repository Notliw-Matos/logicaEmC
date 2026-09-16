// F — Calcule 9 / 4, 9 % 4, 9.0 / 4 e (double)(9 / 4). Explique a diferença entre as duas últimas expressões.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor = 9;
	int quatro = 4;
	int resto, divisaoInt;
	double divisaoMeio, divisaoDouble;
	puts("Calculos (9 e 4))");
	
	divisaoInt = valor / quatro;
	resto = valor % quatro;
	divisaoMeio = (double)valor / quatro;
	divisaoDouble = (double)(valor / quatro);
		
	
	printf("Divisao inteiros: %d\n",divisaoInt);
	printf("Resto inteiros: %d\n",resto);
	printf("Divisao 9 double: %f\n",divisaoMeio);
	printf("Divisao doubles: %f\n",divisaoDouble);

	
}

 /* A diferença entre as ultimas duas expressões é que uma está transformando apenas a variavel valor em 
  * em um numero double, e já a ultima está transformando as duas duas variaveis em double. 
  *
  */
