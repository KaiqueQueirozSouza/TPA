/*
Fun��o: Ler um numero, verificar se � maior que 100. Se for, somar 150
Autor: Kaique de Queiroz Souza
Data de cria��o:28/09/2019
Data de altera��o:28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int num = 0;
	
	printf("Digite um numero: \n");
	scanf("%i", &num);
	
	if(num > 100){
	num = (num + 150);
	printf("Numero = %i \n\n",num);
	}
	else {
	printf("Numero = %i \n\n",num);
	}
	system("pause");
	}
