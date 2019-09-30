/*
Função: Ler dois numeros e mostrar o maior deles
Autor: Kaique de Queiroz Souza
Data de criação:30/09/2019
Data de alteração:30/09/2019
*/


#include <stdio.h>
#include  <windows.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int n1 = 0, n2 = 0;

	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);

	if(n1 > n2){
		printf("O maior numero e: %i \n\n", n1);
	}
	else if(n2 > n1){
	printf("O maior numero e: %i \n\n", n2);
}
system("pause");
}
