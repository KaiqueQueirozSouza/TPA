/*
Trabalho: Teatro
Autor: Leonardo Augusto Secco Galindo e Kaique de Queiroz Souza                                             1ds!
Data de Termino: 04/12/2019
*/

/*
Informar o valor do ingresso e tamanho da sala
Abrir um espetáculo (com isso iremos zerar os espaços e colocar todas as cadeiras disponíveis)
Reservar ou cancelar a reserva de um lugar
Verificar mapa do teatro
Encerrar o espetáculo
Verificar parciais
*/ 

#include <iostream>
#include <windows.h>
#include <locale.h>


 int main(){
	setlocale(LC_ALL, "");
	int l = 0, c = 0, val = 0, dist = 0, contador = 0;
	char lugar = ' ', org[20][25], nome[50];
    float valor = 0, reserva = 0, pos_reserva = 0;
    
	printf("\n");
	printf("           #----------------------------#            | o ?°o? o \n");
	printf("           |           TEATRO           |             |°?_O_?°_ \n");
	printf("           #----------------------------#             |Feliz natal ?(^0^)? \n\n");		

	printf("  Qual o nome do teatro:  ");
	scanf("%s", &nome);
	printf("\n");
	printf("  Quantidade máxima de lugares: 500 poltronas.\n\n");
	
	printf("#--------------------------------------------------------------#\n");
	printf("| Digite a quantidade de linhas e colunas que serao utilizados: \n");
	scanf("%i", &l);   
	scanf("%i", &c); 
	
	printf("\n");
	printf("  Digite o valor do ingresso:  ");
	scanf("%f", &valor);
	
	reserva = valor * 0.6;
	pos_reserva = valor * 0.4;
	
	printf("O preço da reserva sera de %f reais.\n", reserva);
	printf("O preço da entrada será de %f reais \n", pos_reserva);
	
	
	printf("\n");
	printf("\n");

	printf("           |           CLIENTE          |            \n");

	
	printf("  Deseja escolher lugar para reserva? \n");
	printf("  Para realizar a reserva, realize o pagamento de R$ 9.6 do valor total. \n");
	printf("  Para realizar o pagamento, digite 1, mas se preferir cancelar, digite 2:\n");
	scanf("%i", &val);
	
		while (val == 1) {
			for (l = 0; l < 20; l++){
        	for (c = 0; c < 25; c++){
          		org[l][c] = 'D';
          		}
   			}
   			
   			
   		
   			for (l = 0; l < 20; l++){
        		for (c = 0; c < 25; c++){
        		contador = contador + 1;
        		
        		
          		printf("%c||", org[0][0]);
          		printf("");
          		if
					(contador == 25){
          			printf("\n");
          			contador = 0;
				  	}
          		}
   			}
   			
   			for(l = 0; l <= 1; l++){
        		
				printf("Qual a poltrona que voce deseja?!\n");
				printf("Digite o numero da linha da poltrona: ");
				scanf("%i", &l);
				printf("Digite o numero da coluna da poltrona: ");
				scanf("%i", &c);
				printf("Se estiver tudo confirmado, pressione 3, senao, 1.\n");
				scanf("%i", &val);
				if(org[l - 1][c - 1] == 'D'){
          			org[l - 1][c - 1] = 'C';
          		}
          		
          	}
          		
          		for (l = 0; l < 20; l++){
        			for (c = 0; c < 25; c++){
        			contador = contador + 1;
          			printf("%c||", org[l][c]);
          			
          			printf("");
          			if
						  (contador == 25){
          				printf("\n");
          				contador = 0;
				  		}
				  	} 
					  break;
				    }
				 
					}
			 
			 if ( val == 2 ){
	
			 	printf("Voce cancelou o pedido!");
			 	
			   }
			   for (l = 0; l < 20; l++){
        			for (c = 0; c < 25; c++){
        			contador = contador + 1;
          			printf("%c||", org[l][c]);
          			
          			printf("");
          			if
						  (contador == 25){
          				printf("\n");
          				contador = 0;
          		    if (val == 3){
			  
				  printf("\n Reserva realizada com sucesso!\n");
				  
					}	
				  	}
				  	} 
					  break;
				    }
				 
			 
			 system("pause");
			}
			 	
			 

		
		
		

	
