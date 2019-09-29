/*Função: Area de um triangulo
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:29/09/2019
*/

#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int a = 0, b = 0, area = 0;
	
	printf("Digite o valor da base: \n");
	scanf("%i", &a);
	printf("Digite o valor da altura: \n");
	scanf("%i", &b);
	
	area = (b * a)/2;
	printf("O valor da area e: %i \n\n", area);

system("pause");
}
