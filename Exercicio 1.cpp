/*
Função: Calcular a area de um retangulo
Autor: Kaique de Queiroz Souza
Data de criação:
Data de alteração:
*/


#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"")
	ina area = 0, base = 0, altura = 0,
	
	printf("Digite o valor da base: \n");
	scanf("%1", &base);
	
	printf("Digite o valor da altura: \n");
	scanf("%1", &altura);
	
	area = base * altura;
	printf("A area desse retangulo será: %1 \n", area);
	system("pause")
}
