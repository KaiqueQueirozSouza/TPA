/*Função: Calcular a media de um aluno
Autor: Kaique de Queiroz Souza
Data de criação:29/09/2019
Data de alteração:29/09/2019
*/

#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0, soma = 0;
	
	printf("Digite a primeira nota: \n");
	scanf("%i", &n1);
	printf("Digite a segunda nota: \n");
	scanf("%i", &n2);
	printf("Digite a terceira nota: \n");
	scanf("%i", &n3);
	printf("Digite a quarta nota: \n");
	scanf("%i", &n4);
	
	soma = n1 + n2 + n3 + n4;
	media = soma/4;
	
    printf("O valor do novo salario sera: %i \n\n", media);
    
system("pause");
}
