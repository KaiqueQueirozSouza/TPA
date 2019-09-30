/*
Função: Verificar se um numero e maior que 5 e menor que 20, se for, mostrar seu cubo
Autor: Kaique de Queiroz Souza
Data de criação:30/09/2019
Data de alteração:30/09/2019
*/


#include <stdio.h>
#include  <windows.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num = 0, nad = 0;

	printf("Digite um numero: ");
	scanf("%i", &num);

	if(num > 5 and num < 20){
		nad = (num * num * num);
		printf("O cubo do numero e: %i \n\n", nad);
	}
    else if(num > 20 or num < 5){
	printf("O cubo do numero e: %i \n\n", nad);
}
system("pause");
}
