// F — Declare um vetor com seis inteiros e identifique seus índices válidos. O que ocorre ao acessar índice 6?

int main(){
	
	int i;
	int vetor[6] = { 10, 20, 30, 40, 50, 60};
	
	for(i = 0; i < 7; i++){
		printf("[%d] = %d\n", i, vetor[i]);
	}
}

// quando acessamos o 6 indice, conseguimos acessar um "lixo" de memoria.
