#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Jorge Luiz Franco matrícula 202501191231.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
char Codigo_da_Cidade[5];
char Nome_da_Cidade[30];
int Populacao, Numero_de_Pontos_Turisticos;
float area, PIB;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
printf ("Digite o Código da Cidade:\n");
scanf("%s",&Codigo_da_Cidade);

printf("Digite o Nome da Cidade:\n");
scanf("%s",&Nome_da_Cidade);

printf("Digite quantidade da População:\n");
scanf("%d",&Populacao);

printf("Digite a área da cidade em km²:\n");
scanf("%f",&area);

printf("Digite o PIB da Cidade:\n");
scanf("%f",&PIB);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &Numero_de_Pontos_Turisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("CARTA 1:\n");
printf ("Código da Cidade: %s \n - Nome da Cidade: %s \n - População: %d \n - Área: %2.f \n - PIB: %2.f\n - Número de Pontos Turísticos: %d", Codigo_da_Cidade, Nome_da_Cidade, Populacao, area, PIB, Numero_de_Pontos_Turisticos);


    return 0;
}
