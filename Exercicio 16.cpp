/*Função: Ler a media de um aluno e checar se foi aprovado
Autor: Kaique de Queiroz Souza
Data: 29/09/2019
*/


#include <stdio.h>
#include  <windows.h>
#include <locale.h>

int main(){
	
	char nome(50);
	float media = 0;
	setlocale(LC_ALL,"");

	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("Digite a media do aluno:" );
	scanf("%f", &media);
	
	if(media > 7){
		printf("O aluno %s foi aprovado \n\n", &nome);
	}
    else if(media < 7){
	printf("O aluno %s foi reprovado \n\n", &nome);
}
system("pause");
}
