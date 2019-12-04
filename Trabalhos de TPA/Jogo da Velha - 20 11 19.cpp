/* 
TRABALHO: JOGO DA VELHA EM C++
AUTORES: LEONARDO E KAIQUE
DATA INICIO: 6/11/19
DATA DE MODIFICACAO: 10,12,17/11/2019
DATA DE TERMINO: 20/11/2019 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char tela[3][3], a , b;
int i , j , x , y ; 
int teste = 1 , jo , velha = 0;

//a , b sao nomes
//i, j cordenada(linha e coluna)

void disp(void);
void testa(int pl);
void play1(void);
void play2(void); 

int main() {
   for(i=0;i<3;i++)
      for(j=0;j<3;j++)
         tela[i][j]=' ';
         
      printf("\n");
printf("                                    #---------#         \n");
printf("                #------------------------#    |         \n");
printf("           #----|     JOGO DA VELHA      |----#         \n");
printf("           |    #-----------------------#               \n");
printf("           #---------#                                  \n");

 	printf("            ___________________________________           \n");
	printf("            |           |          |          |           \n");
    printf("            |     0 0   |    0 1   |   0 2    |           \n");
    printf("            |           |          |          |           \n");
    printf("            |___________|__________|__________|           \n");
    printf("            |           |          |          |           \n");
    printf("            |     1 0   |    1 1   |   1 2    |           \n");
    printf("            |           |          |          |           \n");
    printf("            |___________|__________|__________|           \n");
    printf("            |           |          |          |           \n");
    printf("            |     2 0   |    2 1   |   2 2    |           \n");
    printf("            |           |          |          |           \n");
    printf("            |___________|__________|__________|           \n");
			          	 
     printf("\n");
     printf("\n");
      
	     printf("                     #---------------#         \n");
	     printf("                     | Jogador 1 = X |         \n");
		 printf("                     | Jogador 2 = O |         \n");
		 printf("                     #---------------#         \n");
		    
		 printf("\n");
		 
		 
		 //--------------------- codigo ---------------------
		      
	     printf(" Nome do jogador 1: "); //pega os nomes
	     scanf("%s", &a);
         printf(" Nome do jogador 2: ");
	     scanf("%s", &b);
	     
	     printf("\n");
	     printf(" A ordem sempre sera:\n");
	     
   printf(" #-----+-----+-----#          \n");
   printf(" | 0 0 | 0 1 | 0 2 |          \n");
   printf(" |-----|-----|-----|          \n");
   printf(" | 1 0 | 1 1 | 1 2 |          \n");
   printf(" |-----|-----|-----|          \n");
   printf(" | 2 0 | 2 1 | 2 2 |          \n");
   printf(" #-----+-----+-----#          \n");
   
   printf("\n\n");
   printf("*-=--=--=--=- [Que Comece o Jogo] -=--=--=--=-*\n");
   printf("\n");
   printf("\n");

      while(teste!=0) {      
         if(teste!=0)
         {      
            play1();
            if(tela[x][y]==' ')
            {
               tela[x][y]='X';
               velha++;
               testa(jo);      
            }
            else
            {
               system("cls");
               printf("Ja esta ocupada \n"); 
               printf("Digite algo para voltar \n");
               getch();
               system("cls");
               play1();
            }
         }
         if(teste!=0)
         {        
            play2();
            if(tela[x][y]==' ')
            {
               velha++;
               tela[x][y]='O';
               testa(jo);   
            }
            else
            {
               system("cls");
               printf("ja esta ocupada \n"); 
               printf("Digite algo para voltarr \n");
               getch();
               play2();    
          }
         }
		}       
       }

void disp(void)
{
   printf(" #---+---+---#          \n");
   printf(" | %c | %c | %c | \n",tela[0][0],tela[0][1],tela[0][2]);
   printf(" |---|---|---| \n ");
   printf("| %c | %c | %c | \n",tela[1][0],tela[1][1],tela[1][2]);
   printf(" |---|---|---| \n ");
   printf("| %c | %c | %c | \n",tela[2][0],tela[2][1],tela[2][2]);
   printf(" #---+---+---#       \n");

   printf("\n");

}

void testa(int pl) //teste de jogada
{
         if(x==0)
         if((tela[0][0]==tela[0][1]) && (tela[0][1]==tela[0][2]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
         teste=0;
         }
         
         if(x==1)
         if((tela[1][0]==tela[1][1]) && (tela[1][1]==tela[1][2]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
         }
         if(x==2)
         if((tela[2][0]==tela[2][1]) && (tela[2][1]==tela[2][2]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
         }

         if(y==0)
         if((tela[0][0]==tela[1][0]) && (tela[1][0]==tela[2][0]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
         }
         
         if(y==1)
         if((tela[0][1]==tela[1][1]) && (tela[1][1]==tela[2][1]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
         }
         if(y==2)
         if((tela[0][2]==tela[1][2]) && (tela[1][2]==tela[2][2]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
         }
         
          
         if(((x==0) && (y==0))||((x==1) && (y==1))||((x==2) && (y==2)))
         {
         if((tela[0][0]==tela[1][1]) && (tela[0][0]==tela[2][2]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
         }
         }
         
         
         if(((x==0) && (y==2))||((x==1) && (y==1))||((x==2) && (y==0)))
         {
         if((tela[0][2]==tela[1][1]) && (tela[0][2]==tela[2][0]))
         {
            disp();
            printf("JOGADOR %i GANHOU!! \n",jo);
            teste=0;
          }
         }
		}

void play1(void)
{
   disp();
   printf("Jogador 1 : Digite a linha: ");
   scanf("%i",&x);
   printf("Jogador 1 : Digite a coluna: ");
   scanf("%i",&y);
  
}

void play2(void)
{
   disp();      
   printf("Jogador 2 : Digite a linha: ");
   scanf("%i",&x);
   printf("Jogador 2 : Digite a coluna: ");
   scanf("%i",&y);

}
