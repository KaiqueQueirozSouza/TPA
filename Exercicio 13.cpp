/*
Função: Ler 3 numeros e mostrar o maior 
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0;

	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%i", &n3);

	if(n1 > n2 and n1 > n3){
		printf("O maior numero e: %i \n\n", n1);
	}
	else if(n2 > n1 and n2 > n3){
	printf("O maior numero e: %i \n\n", n2);
}
	else if(n3 > n1 and n3 > n2){
	printf("O maior numero e: %i \n\n", n3);
}

system("pause");
}
