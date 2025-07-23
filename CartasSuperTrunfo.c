#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //começando a partir daqui.
    //variaveis
	char estado_a;                           //variaveis para armazenar os estados
	char estado_b;			      			       
	char codigo_a[4];						//variaveis para armazenar os codigos das cidades
	char codigo_b[4]; 				
	char cidade_a[50];                     //variaveis para armazenar as cidades
	char cidade_b[50];                      
	int pop_a, pop_b;				      //variavel população
	float area_a, area_b, pib_a, pib_b;	 //variavel area em km² e PIB
	int turismo_a, turismo_b;	        //variavel pontos turisticos
	
	printf("Escolha uma letra entre A e H: ");
	scanf("%c", &estado_a);

	printf("Informe o código da carta, com a letra do Estado seguida de um número(ex: A01, B03): ");
	scanf(" %s", &codigo_a[4]);

	printf("Informe o nome da cidade: ");
	scanf(" %s", &cidade_a[50]);

	printf("Informe o numero de habitantes: ");
	scanf("%i", &pop_a);

	printf("Informe a Área da cidade em km²: ");
	scanf("%f", &area_a);

	printf("Informe o PIB da cidade: ");
	scanf("%f", &pib_a);

	printf("Informe o número de pontos turísticos: ");
	scanf("%i", &turismo_a);

	printf("\n*** Carta 1: *** \n");
	
	printf("Estado: %c \n", estado_a);
	
	printf("Código: %s \n", codigo_a);
	
	printf("Nome da Cidade: %s \n", cidade_a);
	
	printf("População: %i \n", pop_a);
	
	printf("Área: %.3f km² \n", area_a);
	
	printf("PIB: R$ %.3f bilhões de reais \n", pib_a);
	
	printf("Número de pontos Turísticos: %i \n\n", turismo_a);
	
	//dados da carta 2
    
	printf("\n\n   Vamos para os dados da Carta 2   \n\n");
    	
    printf("Escolha outra letra entre A e H diferente da anterior: ");
	scanf(" %c", &estado_b);

	printf("Informe o código da carta com a letra do Estado seguida de um número(ex: A01, B03): ");
	scanf(" %s", &codigo_b[4]);

	printf("Informe o nome da cidade: ");
	scanf(" %s", &cidade_b[50]);

	printf("Informe o numero de habitantes: ");
	scanf("%i", &pop_b);

	printf("Informe a Área da cidade em km²: ");
	scanf("%f", &area_b);

	printf("Informe o PIB da cidade: ");
	scanf("%f", &pib_b);

	printf("Informe o número de pontos turísticos: ");
	scanf("%i", &turismo_b);
	
	printf("\n*** Carta 2: *** \n");
	
	printf("Estado: %c \n", estado_b);
	
	printf("Código: %s \n", codigo_b);
	
	printf("Nome da Cidade: %s \n", cidade_b);
	
	printf("População: %i \n", pop_b);
	
	printf("Área: %.3f km² \n", area_b);
	
	printf("PIB: R$ %.3f bilhões de reais \n", pib_b);

	printf("Número de pontos Turísticos: %i \n", turismo_b);

    return 0;

}
