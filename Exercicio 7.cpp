/*Função: Calcular o valor do salario e acrescentar um aumento
Autor: Kaique de Queiroz Souza
Data de criação:29/09/2019
Data de alteração:29/09/2019
*/

#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int salario = 0, aumento = 0, novosalario = 0;
	
	printf("Digite o lado: \n");
	scanf("%i", &salario);
	printf("Digite a base: \n");
	scanf("%i", &aumento);
	
	novosalario = salario + aumento;
    
    printf("O valor do novo salario sera: %i \n\n", novosalario);
    
system("pause");
}
