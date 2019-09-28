/*
Função: Trocar os valores
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:28/09/2019
*/

#include <stdio.h>
#include <windows.h>

int main(){
	int a = 0, b = 0, troca = 0;

	printf("Digite o primeiro numero: \n");
	scanf("%1", &a);
	printf("Digite o segundo numero: \n\n");
	scanf("%1", &b);

	troca = a;
	a = b;
	b = troca;
	
printf(" - - - - - - - - - - - - - - - -\n\n");
	printf("Agora o primeiro e: \n", a);
	printf("E o segundo: \n\n\n", b);
	system("pause");
		}
