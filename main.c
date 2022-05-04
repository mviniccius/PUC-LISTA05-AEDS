#include <stdio.h>
#include <conio.h>
#include <string.h>

 char str1[50];
 int i, tam;


int ex01();




int main(){

    
     int menu;

    printf("Escolha o exercicio desejado ou 0 para sair: \n");
    scanf("%i", &menu);
  
  
  //  fflush(stdin);
 //   menu = getch();

    while (menu != 0)
    {
       switch (menu)
       {
        case 0:
        break;

         case 1:
           printf("Exercício 1\n");
           ex01();
           break;
        case 2:
            printf("Exercício 2\n");
            break;
        case 3:
            printf("Exercício 3\n");
            break;
        case 4:
            printf("Exercício 4\n");
            break;
        case 5:
            printf("Exercício 5\n");
            break;
        case 6:
            printf("Exercício 6\n");
            break;
        case 7:
            printf("Exercício 7\n");
            break;
        case 8:
            printf("Exercício 8\n");
            break;
        case 9:
            printf("Exercício 9\n");
            break;      
        case 10:
           printf("Exercício 10\n");
           break;      
       default:
           printf("Opcao invalida!\n");
       }
        
    printf("Escolha o exercicio desejado ou 0 para sair: \n");
    scanf("%i", &menu);
    }
    
    printf("Escolhido: %i, %c\n", menu, menu);
    return 0;
}

int ex01(){

    /*
            Crie um procedimento para:
            - ler uma palavra do teclado;
            - mostrar todas as letras maiúsculas que estão na palavra digitada.
            DICA: Definir um teste para determinar se um caractere é letra maiúscula.
    */

  

    printf("Digite uma palavra: \n");
    
    fflush(stdin);
    gets(str1);

    tam = strlen(str1);

  //  printf("Tamanho: %i Foi digitado \n\n %s\n\n",tam, str1);

    for(i = 0; i < tam; i++){
        
        if(str1[i] >= 65 && str1[i] <= 90 ){
        printf("\n%c\n", str1[i]);
        }
    }

}