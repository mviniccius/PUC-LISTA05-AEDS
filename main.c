#include <stdio.h>
#include <conio.h>
#include <string.h>

 char str1[50], letra[2],str2[50];
 int i, tam, cont, contIgual, contMaior;


int ex01();
int ex02();
int ex03();
int ex04();



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
           printf("Exercicio 1\n");
           ex01();
           break;
        case 2:
            printf("Exercicio 2\n");
            ex02();
            break;
        case 3:
            printf("Exercicio 3\n");
            ex03();
            break;
        case 4:
            printf("Exercicio 4\n");
            ex04();
            break;
        case 5:
            printf("Exercicio 5\n");
            break;
        case 6:
            printf("Exercicio 6\n");
            break;
        case 7:
            printf("Exercicio 7\n");
            break;
        case 8:
            printf("Exercicio 8\n");
            break;
        case 9:
            printf("Exercicio 9\n");
            break;      
        case 10:
           printf("Exercicio 10\n");
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
        
        if(str1[i] >= 65 && str1[i] <= 90){
        printf("\n%c\n", str1[i]);
        }
    }
return 0;
}

int ex02(){
/*
2. Crie um procedimento para:
    - ler uma palavra do teclado;
    - ler um caractere do teclado
    - transforme toda a palavra em maiúscula;
    - contar e mostrar as letras maiúsculas menores que o caractere, e quantas letras são maiores que o caractere, e 
      quantas são iguais ao caractere lido
*/

    //Ler palavra do teclado
    printf("Digite uma palavra: \n");
    fflush(stdin);
    gets(str1);
    //Ler caractere do teclado
    printf("Digite um caracter");
    fflush(stdin);
    gets(letra);

    if(letra[0] >= 97 && letra[0] <= 122){
            letra[0] -= 32;
            }
    
    tam = strlen(str1);
    
    printf("Palavra digitada: %s\nLetra digitada: %s\nTamanho palavra: %i\n", str1, letra, tam);

    for(i = 0; i  < tam; i++){
            if(str1[i] >= 97 && str1[i] <= 122){
            str1[i] -= 32;
            }

            if(str1[i] == letra[0]){
                printf("A Letra * %s *\n", letra);
                contIgual++;
            }

            if(str1[i] < letra[0]){
                strcpy(str2, str1);          
            }
    
            if(str1[1] > letra [0]){
                contMaior++;
            }


    }
            //Palavra convertida
            printf("* %s *\n", str1);
            printf("Extracao:* %s *\n", str2);
            printf("\nTem *%i* maior que * * \n Tem *%i* igual a * *\n", contMaior, contIgual);


    return 0;
}

int ex03(){

 /*
    3. Crie um procedimento para:
        - ler uma cadeia de caracteres do teclado;
        - contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.
*/   

    printf("Digite uma cadeia de caracteres:\n");
    fflush(stdin);
    gets(str1);

    tam = strlen(str1);

    for(i = 0; i < tam; i++){

        if((str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122))

            cont++;
    }

    printf("Tem %i letras na cadeia de caracteres\n", cont);

    return 0;
}

int ex04(){

/*
    4. Crie um procedimento para:
        - ler uma cadeia de caracteres do teclado;
        - contar e mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres.
*/

    printf("Digite uma cadeia de caracteres\n");
    fflush(stdin);
    gets(str1);

    tam = strlen(str1);

    for(i = tam-1; i >= 0; i--){
        
         if((str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122)){
             printf("%s", str1[i]);
             cont++;
         }

    }
  //  printf("* %s *\n", str1);
    printf("\n");

    return 0;
}