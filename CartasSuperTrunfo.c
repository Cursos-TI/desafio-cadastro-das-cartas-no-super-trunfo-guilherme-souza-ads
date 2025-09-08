#include <stdio.h>

int main(){
     printf("Países\n");
     printf("\nCadastro das Cartas:\n");
/*
1:Definir a Estrutura para a Cidade:
Primeiro, vamos criar uma estrutura para armazenar as informações de cada cidade. 
Esta estrutura conterá campos como estado, código, nome da cidade, população, PIB, área e número de pontos turísticos.
*/
    
     // Cadastro das Cartas:

    //VARIAVÉIS E TIPO DA CARTA 01
    
    char estado1[50];  // Declara uma variável de caractere chamada "estado1"
    char codigo1[50];  // Declara uma variável de caractere chamada "codigo1"
    char cidade1[50];  // Declara uma variável de caractere chamada "cidade1"
    int populacao1;   // Declara uma variável inteira chamada "populacao1"
    float area1; // Declara uma variável de ponto flutuante chamada "area1"
    float pib1;  // Declara uma variável de ponto flutuante chamada "pib1"
    int ponto_turistico1; // Declara uma variável inteira chamada "ponto_turistico1"

    // VARIAVÉIS DA CARTA 02 

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;    


   /*Entrada de Dados:
    A função principal deverá solicitar ao usuário a entrada dos dados para cada cidade.*/
    
    //ENTRADA DE DADOS DA CARTA 01
    
    printf("Carta 01 - Digite uma letra de 'A' a 'H': \n");
    scanf("%s", estado1);

    printf("Carta 01 - Digite o código: \n");
    scanf("%s", codigo1);

    printf("Carta 01 - Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Carta 01 - Digite O número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Carta 01 - Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);    

    printf("Carta 01 - Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Carta 01 - Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &ponto_turistico1); 
    
    //ENTRADA DE DADOS DA CARTA 02
    printf("Carta 02 - Digite uma letra de 'A' a 'H': \n");
    scanf("%s", estado2);

    printf("Carta 02 - Digite o código: \n");
    scanf("%s", codigo2);

    printf("Carta 02 - Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Carta 02 - Digite O número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Carta 02 - Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);    

    printf("Carta 02 - Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Carta 02 - Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &ponto_turistico2);

  // Saída de dados Da CARTA 01
   printf("\nCarta 1:\n");

   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área (em km²): %.f\n", area1);
   printf("PIB: %.f\n", pib1);   
   printf("Número de Pontos Turísticos: %d\n", ponto_turistico1); 
    
   //SAIDA DE DADOS DA CARTA 02
   printf("\nCarta 2:\n");

   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área (em km²): %.f\n", area2);
   printf("PIB: %.f\n", pib2);   
   printf("Número de Pontos Turísticos: %d\n", ponto_turistico2); 
   
   
   
    return 0;

}