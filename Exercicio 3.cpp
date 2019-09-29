/*Função: Calcular area de um circulo
Autor: Kaique de Queiroz Souza
Data de criação:28/09/2019
Data de alteração:28/09/2019
*/

#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int raio = 0, area = 0, diametro = 0;
	
	printf("Digite o valor do raio: \n");
	scanf("%i", &raio);
	
	diametro = (raio * raio);
	area = (diametro * 3.6);
	printf("O valor da area e: %i \n\n", area);
    
system("pause");
}
