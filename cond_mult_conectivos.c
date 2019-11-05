#include <stdio.h> 
#include <stdlib.h>

void main() {
	

	int a = 10;

	//Conectivo e Lógico e (AND), se uma comparaçao for falsa
	//nao entra no bloco && = AND
	if (a > 5 && a < 15) {
		printf("\n A variavel 'a esta entre 5 e 15");		;
	} 

	//Conectivo Lógico OU (OR), se uma comparação for verdadeira
	//já entra no bloco || = ou OR
	if (a > 5 || a > 15){
		printf("\n A variavel 'a' eh maior que 5 ou é maior que 15");		}
	
	//Misturando conectivos
	if ( ( a > 5 && a < 15) || a == 20){	
	printf ("\n A condicional variavel esta entre 5 e 15 ou ela vale 20");
	}
	if (a > 5 || a > 15){
		printf("\n A variavel 'a' eh maior que 5 ou é maior que 15");		}
	
	
	system ("pause")
}
