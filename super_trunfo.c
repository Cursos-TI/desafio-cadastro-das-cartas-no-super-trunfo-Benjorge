#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das Cartas
// Teste Jorge Luiz Franco matrícula 202501191231.

int main() {
    
    char Estado1, Carta1[2], Codigo_da_Carta1[3], Nome_da_Cidade1[30];
    unsigned long int Populacao1; 
    int Numero_de_Pontos_Turisticos1;
    float Area1, PIB1;
    float Densidade_Populacional1, PIB_Per_Capita1;
   
    char Estado2, Carta2[2], Codigo_da_Carta2[3], Nome_da_Cidade2[30];
    unsigned long int Populacao2; 
    int Numero_de_Pontos_Turisticos2;
    float Area2, PIB2;
    float Densidade_Populacional2, PIB_Per_Capita2;
    

    printf ("Cadastrando a Carta 1\n\n");
    //printf ("\n");
    
    printf ("Digite uma letra para o Estado da Carta 1:\n"); //Digitar uma letra para o Estado.
    scanf ("%c", &Estado1);

    printf ("Digite o código da Carta 1:\n"); // Digitar uma letra maiúscula juntamente com dois dígitos seguenciais, ex; A01.
    scanf ("%s", &Codigo_da_Carta1);

    printf ("Digite o nome da cidade da Carta 1:\n");
    scanf ("%s", &Nome_da_Cidade1);

    printf ("Digite a população da cidade da Carta 1:\n");
    scanf ("%lu", &Populacao1);

    printf ("Digite a área da cidade da Carta 1:\n");
    scanf("%f", &Area1);

    printf ("Digite o PIB da cidade da Carta 1:\n");
    scanf ("%f", &PIB1);

    printf ("Digite o número de pontos turísticos da cidade da Carta 1:\n");
    scanf ("%d", &Numero_de_Pontos_Turisticos1);

    Densidade_Populacional1 = (float)Populacao1/Area1;

    PIB_Per_Capita1 = PIB1/(float)Populacao1;

    printf("CARTA 1:\n");
    printf ("Estado: %c\n - Código da Carta: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área (km²): %.2f\n - PIB: %.2f reais\n - Número de Pontos Turísticos: %d\n", Estado1, Codigo_da_Carta1, Nome_da_Cidade1, Populacao1, Area1, PIB1, Numero_de_Pontos_Turisticos1);
    printf (" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", Densidade_Populacional1, PIB_Per_Capita1);
    printf ("\n");
    

    printf ("Cadastrando a Carta 2\n");
    printf ("\n");
    
    printf ("Digite uma letra para o Estado da Carta 2: \n"); //Digitar uma letra para o Estado.
    scanf (" %c", &Estado2);

    printf ("Digite o código da Carta 2:\n"); // Digitar uma letra maiúscula juntamente com dois dígitos seguenciais, ex; A01.
    scanf ("%s", &Codigo_da_Carta2);

    printf ("Digite o nome da cidade da Carta 2:\n");
    scanf ("%s", &Nome_da_Cidade2);

    printf ("Digite a população da cidade da Carta 2:\n");
    scanf ("%lu", &Populacao2);

    printf ("Digite a área da cidade da Carta 2:\n");
    scanf ("%f", &Area2);

    printf ("Digite o PIB da cidade da Carta 2:\n");
    scanf ("%f", &PIB2);

    printf ("Digite o número de pontos turísticos da cidade da Carta 2:\n");
    scanf ("%d", &Numero_de_Pontos_Turisticos2);
    
    Densidade_Populacional2 = (float)Populacao2/Area2;

    PIB_Per_Capita2 = PIB2/(float)Populacao2;

    printf("CARTA 2:\n");
    printf ("Estado: %c\n - Código da Carta: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área (km²): %.2f\n - PIB: %.2f reais\n - Número de Pontos Turísticos: %d\n", Estado2, Codigo_da_Carta2, Nome_da_Cidade2, Populacao2, Area2, PIB2, Numero_de_Pontos_Turisticos2);
    printf (" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", Densidade_Populacional2, PIB_Per_Capita2);


    printf ("\n");
    printf ("Comparação de Cartas: (Atributo: População):\n");
    printf ("Carta1 %s - %s: %lu\n", Carta1, Nome_da_Cidade1, Populacao1);
    printf ("Carta2 %s - %s: %lu\n", Carta2, Nome_da_Cidade2, Populacao2);
    
    if(Populacao1 > Populacao2){
        printf("Resultado: Carta1 (%s) venceu!\n", Nome_da_Cidade1);
    } else {
        printf("Resultado: Carta2 (%s) venceu!\n", Nome_da_Cidade2);
    }

    
    
    return 0;
}
