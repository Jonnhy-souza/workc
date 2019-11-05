#include <stdio.h>
#include <stdlib.h>

void main()

//Definindo variáveis

	int a = 5, b = 10, c = 15;
	char d = 'x';

//Maior
if (a > 2){
	printf( "\n %d eh maior que 2", a);
}


//Maior ou igual
if (c >= b){
	printf( "\n %d eh maior ou igual que %d", c,b);
}
//Menor
if (a <= 10 ){
	printf( "\n %d eh menor ou igual que %d", c,b);
}

//Diferente
if (c != 10){
	printf ("\n A variavel %d é diferente de 10", c);
}

if (d != 'x'){
	printf ("\n A variavel %c é diferente de 10", d);
}
system ("pause")
