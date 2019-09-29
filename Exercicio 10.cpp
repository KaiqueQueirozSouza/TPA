/*
Função: Ler um numero e mostrar se e positivo ou negativo
Autor: Kaique de Queiroz Souza
Data de criação:29/09/2019
Data de alteração:29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int  num = 0;

	printf("Digite o numero: \n");
	scanf("%i", &num);
    
    if(num > 0){
	printf("O numero e positivo \n");
	}
    else if(num < 0);{
	printf("O numero e negativo \n");
	}

	
system("pause");
}
