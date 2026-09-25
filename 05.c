// M — Leia oito valores e mostre maior, menor e média. Inicialize maior e menor com o primeiro valor lido.

int main(){
	
	int vetor[8] = {100, 6, 90, 20, 80, 30, 40, 88};
	int i;
	int menor = 9999, maior = -1000, soma;
	float media;
	
	for(i = 0; i < 8; i++){
		if(menor > vetor[i])
			menor = vetor[i];
		if(maior < vetor[i])
			maior = vetor[i];
		
		soma += vetor[i];
	}
	
	media = (float)soma / 8;
	
	printf("Media: %.2f \nMaior: %d \nMenor: %d\n",media,maior,menor);
}
