#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
// Desenvolvido por Ernesto Silva
// Matrícula: 202507200003
// Data inicial: 17/08/2025
// Data final: 25/09/2025

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
//variaveis
	char estado_a;                             //variaveis para armazenar os estados
	char estado_b;			      			       
	char codigo_a[4];						  //variaveis para armazenar os codigos das cidades
	char codigo_b[4]; 				
	char cidade_a[50];                      //variaveis para armazenar as cidades
	char cidade_b[50];                      
	int pop_a, pop_b;				       //variavel população
	float area_a, area_b, pib_a, pib_b;	  //variavel area em km² e PIB
	int turismo_a, turismo_b;	         //variavel pontos turisticos
	float densidade_a, densidade_b; //variavel densidade demografica
	float pib_per_capita_a, pib_per_capita_b; //variavel PIB per capita
	
	printf("*** Jogo Super Trunfo ***\n\n");
	printf("==============================\n");
	printf("Insira os dados da Carta 1   \n\n");

	printf("Escolha uma letra entre A e H: ");
	scanf(" %c", &estado_a);

	printf("Informe o código da carta, com a letra do Estado seguida de um número(ex: A01, B03): ");
	scanf(" %s", codigo_a);

	printf("Informe o nome da cidade: ");
	scanf(" %49[^\n]", cidade_a);

	printf("Informe o numero de habitantes: ");
	scanf("%i", &pop_a);

	printf("Informe a Área da cidade em km²: ");
	scanf("%f", &area_a);
	while(getchar() != '\n'); // Limpa o buffer até o ENTER

	printf("Informe o PIB da cidade: ");
	scanf("%f", &pib_a);

	printf("Informe o número de pontos turísticos: ");
	scanf("%i", &turismo_a);

	//calculo da densidade demografica
	if (area_a != 0) {
		densidade_a = pop_a / area_a;
	} else {
		densidade_a = 0; // Evita divisão por zero
	}
	//calculo do PIB per capita
	pib_per_capita_a = (pib_a * 1000000.0f) / pop_a;

	//mostrando os dados da carta 1

	printf("\n*** Carta 1: *** \n");
	
	printf("Estado: %c \n", estado_a);
	
	printf("Código: %s \n", codigo_a);
	
	printf("Nome da Cidade: %s \n", cidade_a);
	
	printf("População: %.2f milhões de habitantes\n", pop_a / 1000000.0);
	
	printf("Área: %.2f km² \n", area_a);
	
	printf("PIB: R$ %.2f milhões de reais \n", pib_a);
	
	printf("Número de pontos Turísticos: %i \n", turismo_a);

	printf("Densidade Demográfica: %.2f habitantes por km² \n", densidade_a);

	printf("PIB per capita: R$ %.2f \n", pib_per_capita_a);
	
	//coleta de dados da carta 2
    
	printf("\n\nAgora informe os dados da Carta 2  \n\n");
    	
    printf("Escolha outra letra entre A e H diferente da anterior: ");
	scanf(" %c", &estado_b);

	printf("Informe o código da carta com a letra do Estado seguida de um número(ex: A01, B03): ");
	scanf(" %s", codigo_b);

	printf("Informe o nome da cidade: ");
	scanf(" %49[^\n]", cidade_b);

	printf("Informe o numero de habitantes: ");
	scanf("%i", &pop_b);

	printf("Informe a Área da cidade em km²: ");
	scanf("%f", &area_b);
	while(getchar() != '\n'); // Limpa o buffer até o ENTER

	printf("Informe o PIB da cidade: ");
	scanf("%f", &pib_b);

	printf("Informe o número de pontos turísticos: ");
	scanf("%i", &turismo_b);

	//calculo da densidade demografica
	if (area_b != 0) {
		densidade_b = pop_b / area_b;
	} else {
		densidade_b = 0; // Evita divisão por zero
	}
	//calculo do PIB per capita
	pib_per_capita_b = (pib_b * 1000000.0f) / pop_b;

	//mostrando os dados da carta 2
	
	printf("\n*** Carta 2: *** \n");
	
	printf("Estado: %c \n", estado_b);
	
	printf("Código: %s \n", codigo_b);
	
	printf("Nome da Cidade: %s \n", cidade_b);
	
	printf("População: %.2f milhões de habitantes\n", pop_b / 1000000.0);
	
	printf("Área: %.2f km² \n", area_b);
	
	printf("PIB: R$ %.2f milhões de reais \n", pib_b);
	
	printf("Número de pontos Turísticos: %i \n", turismo_b);

	printf("Densidade Demográfica: %.2f habitantes por km² \n", densidade_b);

	printf("PIB per capita: R$ %.2f \n", pib_per_capita_b);

	
	// logica de comparação das cartas

	printf("\n\n*** Resultados da comparação entre as cartas ***\n");

	if (pop_a > pop_b){
		printf("\nA carta 1 venceu na categoria População! \nPopulação Carta 1: %i \nPopulação Carta 2: %i\n", pop_a, pop_b);
	} else if (pop_a < pop_b){
		printf("\nA carta 2 venceu na categoria População! \nPopulação Carta 1: %i \nPopulação Carta 2: %i\n", pop_a, pop_b);
	} else {
		printf("\nEmpate na categoria População! \nPopulação Carta 1: %i \nPopulação Carta 2: %i\n", pop_a, pop_b);
	}

	if (pib_per_capita_a > pib_per_capita_b){
		printf("\nA carta 1 venceu na categoria PIB per capita! \nPIB per capita Carta 1: R$ %.2f \nPIB per capita Carta 2: R$ %.2f\n", pib_per_capita_a, pib_per_capita_b);
	} else if (pib_per_capita_a < pib_per_capita_b){
		printf("\nA carta 2 venceu na categoria PIB per capita! \nPIB per capita Carta 1: R$ %.2f \nPIB per capita Carta 2: R$ %.2f\n", pib_per_capita_a, pib_per_capita_b);
	} else {
		printf("\nEmpate na categoria PIB per capita! \nPIB per capita Carta 1: R$ %.2f \nPIB per capita Carta 2: R$ %.2f\n", pib_per_capita_a, pib_per_capita_b);
	}

}
