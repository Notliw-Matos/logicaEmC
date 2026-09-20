// M — Leia quantidade e preço unitário em centavos. Calcule o total e exiba reais e centavos. Adote limites de entrada que evitem estouro.

int main(){
	float centavos;
	int quantidade;
	float resultado;
	
	puts("Digite a quantidade: ");
	scanf("%d",&quantidade);
	if(quantidade > 100)
		return 1;
	
	puts("Digite o valor em centavos: ");
	scanf("%f",&centavos);
	
	if(centavos > 0.99){
		puts("Valor em centavos invalido.");
		return 1;
	}
	
	resultado = quantidade * centavos;
	
	printf("\nValor total: %.2f\n", resultado);

}
