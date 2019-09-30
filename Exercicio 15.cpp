/*
Função: Classificar um nadador de acordo com sua idade
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int id = 0;

	printf("Digite sua idade: ");
	scanf("%i", &id);
	
	if(id > 5 and  id < 11){
			printf("Classe infantil \n");
	}
	else if(id > 12 and id < 17){
			printf("Classe juvenil \n");
	}
	else if(id > 18){
			printf("Classe adulto \n");
	}

system("pause");
}
