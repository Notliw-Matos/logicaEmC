// M — Leia uma matriz 3 × 3. Mostre soma de cada linha, de cada coluna e da diagonal principal.

int main(){
	int matrix[3][3] = {{10, 10 , 10} ,{30, 20, 10},{63,64,79}};
	int i = 0, j = 0;
	int somaLinha[3] = {0};
	int somaDiagonal;
	int somaColuna[3] = {0};
	
	for(i = 0; i < 3; i++){
				
		for(j = 0; j < 3; j++){
			printf("\n[%d][%d] = %d",i,j,matrix[i][j]);
			if(j == i)
				somaDiagonal += matrix[i][j];
			somaLinha[j] += matrix[i][j];
			somaColuna[i] += matrix[i][j];
		}
	}
	printf("\n\n");
	for(i = 0; i<3;i++)
		printf("\nSoma Linha[%d]: %d",i,somaLinha[i]);
	printf("\n\n");
	for(i = 0;i<3;i++)
		printf("\nSoma Coluna[%d]: %d",i,somaColuna[i]);
	printf("\n\n");

	printf("\nSoma Diagonal: %d",somaDiagonal);


}
