#include <stdio.h>
#include <stdlib.h>


void main () {


	//Definindo uma váriavel
	int a;
	float b;
	char c;
	bool d;

	
	//Passando valores
	a = 5;
	b = 2.3;
	c = 'a';
	
	//Imprimindo a váriavel a
	printf("\n O valor de a = %d", a)
	printf("\n O valor de a = %.2f", b)
	printf("\n O valor de a = %c\n", c)
	printf("\n O valor de a = %d\n", d)


	

	//Lendo
	scanf("%d", &a);
	scanf("%f", &b);
	scanf(" %c", &c);
	scanf("%d", &d);


	//Imprimindo e usando o \n para pular a linha	
	printf("\n O valor de a = %d", a);
	printf("\n O valor de b = %.2f", b);
	printf("\n O valor de c = %c", c);
	printf("\n O valor de d = %d\n", d);

	//Pausando
	system ("pause")
