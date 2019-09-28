/*
Função: Ler um numero, verificar se é maior que 100. Se for, somar 150
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num = 0;
	
	printf("Digite um numero: \n");
	scanf("%1", num);
	
	if(num > 100){
	num = (num + 150);
	printf("Numero = %i\n\n\n",num);
	}
	else{
	printf("Numero = %i\n\n\n",num);
	}
	system("pause");
	}
