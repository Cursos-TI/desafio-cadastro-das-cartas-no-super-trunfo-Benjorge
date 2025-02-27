#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Jorge Luiz Franco matrícula 202501191231.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Estado, Codigo_da_Carta [3], Nome_da_Cidade [30];
    int Populacao, Numero_de_Pontos_Turisticos;
    float Area, PIB;
    float Densidade_Populacional, PIB_Per_Capita;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf ("Cadastrando a Carta 1\n");
    printf ("\n");
    
    printf ("Digite uma letra para o Estado da Carta 1:\n"); //Digitar uma letra para o Estado.
    scanf ("%c", &Estado);

    printf ("Digite o código da Carta 1:\n"); // Digitar uma letra maiúscula juntamente com dois dígitos seguenciais, ex; A01.
    scanf ("%s", &Codigo_da_Carta);

    printf ("Digite o nome da cidade da Carta 1:\n");
    scanf ("%s", &Nome_da_Cidade);

    printf ("Digite a população da cidade da Carta 1:\n");
    scanf ("%d", &Populacao);

    printf ("Digite a área da cidade da Carta 1:\n");
    scanf ("%f", &Area);

    printf ("Digite o PIB da cidade da Carta 1:\n");
    scanf ("%f", &PIB);

    printf ("Digite o número de pontos turísticos da cidade da Carta 1:\n");
    scanf ("%d", &Numero_de_Pontos_Turisticos);

    Densidade_Populacional = (float)Populacao/Area;

    PIB_Per_Capita = PIB/(float)Populacao;

    printf("CARTA 1:\n");
    printf ("Estado: %c\n - Código da Carta: %s\n - Nome da Cidade: %s\n - População: %d\n - Área (km²): %.2f\n - PIB: %.2f reais\n - Número de Pontos Turísticos: %d\n", Estado, Codigo_da_Carta, Nome_da_Cidade, Populacao, Area, PIB, Numero_de_Pontos_Turisticos);
    printf (" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", Densidade_Populacional, PIB_Per_Capita);
    printf ("\n");
    

    printf ("Cadastrando a Carta 2\n");
    printf ("\n");
    
    printf ("Digite uma letra para o Estado da Carta 2: \n"); //Digitar uma letra para o Estado.
    scanf (" %c", &Estado);
    //scanf ("%c", &Estado);

    printf ("Digite o código da Carta 2:\n"); // Digitar uma letra maiúscula juntamente com dois dígitos seguenciais, ex; A01.
    scanf ("%s", &Codigo_da_Carta);

    printf ("Digite o nome da cidade da Carta 2:\n");
    scanf ("%s", &Nome_da_Cidade);

    printf ("Digite a população da cidade da Carta 2:\n");
    scanf ("%d", &Populacao);

    printf ("Digite a área da cidade da Carta 2:\n");
    scanf ("%f", &Area);

    printf ("Digite o PIB da cidade da Carta 2:\n");
    scanf ("%f", &PIB);

    printf ("Digite o número de pontos turísticos da cidade da Carta 2:\n");
    scanf ("%d", &Numero_de_Pontos_Turisticos);
    
    Densidade_Populacional = (float)Populacao/Area;

    PIB_Per_Capita = PIB/(float)Populacao;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada carta, imprima cada informação em uma linha separada, com uma descrição clara.

    printf("CARTA 2:\n");
    printf ("Estado: %c\n - Código da Carta: %s\n - Nome da Cidade: %s\n - População: %d\n - Área (km²): %.2f\n - PIB: %.2f reais\n - Número de Pontos Turísticos: %d\n", Estado, Codigo_da_Carta, Nome_da_Cidade, Populacao, Area, PIB, Numero_de_Pontos_Turisticos);
    printf (" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", Densidade_Populacional, PIB_Per_Capita);

    return 0;
}
