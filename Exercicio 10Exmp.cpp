/*
Função: Trocar os valores
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int a = 0, b = 0, troca = 0;

	printf("Digite o primeiro numero: \n");
	scanf("%i", &a);
	printf("Digite o segundo numero: \n\n");
	scanf("%i", &b);

	troca = a;
	a = b;
	b = troca;
	
printf(" - - - - - - - - - - - - - - - -\n\n");
	printf("Agora o primeiro e: %i\n", a);
	printf("E o segundo: %i \n\n", b);
	
system("pause");
}
