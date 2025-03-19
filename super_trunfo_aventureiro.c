#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Estruturas de decisão encadeadas e aninhadas - Nivel Aventureiro.
// Teste Jorge Luiz Franco matrícula 202501191231.

int main() {
    
 
    // Informações Carta 1:
    char Estado1 = 'A';
    char Codigo_da_Carta1[3] = "A01";
    char Nome_da_Cidade1[30] = "SAOPAULO-SP";
    unsigned long int Populacao1= 12325000;
    float Area1 = 1527.11;
    float PIB1 = 699280000000;
    int Numero_de_Pontos_Turisticos1 = 50;
    
    float Densidade_Populacional1 = (float)Populacao1/Area1;
    float PIB_Per_Capita1 = PIB1/(float)Populacao1;

    printf("CARTA 1:\n");
    printf ("Estado: %c\n - Código da Carta: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área (km²): %.2f\n - PIB: %.2f reais\n - Número de Pontos Turísticos: %d\n", Estado1, Codigo_da_Carta1, Nome_da_Cidade1, Populacao1, Area1, PIB1, Numero_de_Pontos_Turisticos1);
    printf (" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", Densidade_Populacional1, PIB_Per_Capita1);
    printf ("\n");
    
    // Informações Carta 2:
    char Estado2 = 'B';
    char Codigo_da_Carta2[3] = "B02 ";
    char Nome_da_Cidade2[30] = "RIODEJANEIRO-RJ";
    unsigned long int Populacao2= 6748000;
    float Area2 = 1200;
    float PIB2 = 300500000000;
    int Numero_de_Pontos_Turisticos2 = 50;
    
    float Densidade_Populacional2 = (float)Populacao2/Area2;
    float PIB_Per_Capita2 = PIB2/(float)Populacao2;



    printf("CARTA 2:\n");
    printf ("Estado: %c\n - Código da Carta: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área (km²): %.2f\n - PIB: %.2f reais\n - Número de Pontos Turísticos: %d\n", Estado2, Codigo_da_Carta2, Nome_da_Cidade2, Populacao2, Area2, PIB2, Numero_de_Pontos_Turisticos2);
    printf (" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n\n", Densidade_Populacional2, PIB_Per_Capita2);

    int Menu;
    printf("Escolha a opção do atributo para avaliar a carta vencedora:\n");
    printf(" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Número de Pontos Turísticos\n 5 - Densidade Populacional\n"); 
    printf("Digite aqui: ");
    scanf("%d", &Menu);

    switch (Menu)
    {
        case 1:
        if(Populacao1 > Populacao2){
            printf("Carta 1, Cidade: %s, Venceu!!!\n Atributo Escolhido: População.\n População Cidade %s: %lu.\n População Cidade %s: %lu.\n", Nome_da_Cidade1, Nome_da_Cidade1, Populacao1, Nome_da_Cidade2, Populacao2);
        } else if (Populacao1 < Populacao2){
            printf("Carta 2, Cidade: %s, Venceu!!!\n Atributo Escolhido: População.\n População Cidade %s: %lu.\n População Cidade %s: %lu.\n", Nome_da_Cidade2, Nome_da_Cidade1, Populacao1, Nome_da_Cidade2, Populacao2);
        } else {
            printf("Houve empate!\n");
        }
        break;
        
        case 2:
        if(Area1 > Area2){
            printf("Carta 1, Cidade: %s, Venceu!!!\n Atributo Escolhido: Área.\n Área da Cidade %s: %.2f.\n Área da Cidade %s: %.2f.\n", Nome_da_Cidade1, Nome_da_Cidade1, Area1, Nome_da_Cidade2, Area2);
        } else if (Area1 < Area2){
            printf("Carta 2, Cidade: %s, Venceu!!!\n Atributo Escolhido: Área.\n Área da Cidade %s: %.2f.\n Área da Cidade %s: %.2f.\n", Nome_da_Cidade2, Nome_da_Cidade1, Area1, Nome_da_Cidade2, Area2);
        } else {
            printf("Houve empate!\n");
        }
        break;
        
        case 3:
        if(PIB1 > PIB2){
            printf("Carta 1, Cidade: %s, Venceu!!!\n Atributo Escolhido: PIB.\n PIB da Cidade %s: %.2f.\n PIB da Cidade %s: %.2f.\n", Nome_da_Cidade1, Nome_da_Cidade1, PIB1, Nome_da_Cidade2, PIB2);
        } else if (Area1 < Area2){
            printf("Carta 2, Cidade: %s, Venceu!!!\n Atributo Escolhido: PIB.\n PIB da Cidade %s: %.2f.\n PIB da Cidade %s: %.2f.\n", Nome_da_Cidade2, Nome_da_Cidade1, PIB1, Nome_da_Cidade2, PIB2);
        } else {
            printf("Houve empate!\n");
        }
        break;

        case 4:
        if(Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2){
            printf("Carta 1, Cidade: %s, Venceu!!!\n Atributo Escolhido: Número de Pontos Turísticos.\n Número de Pontos Turísticos da Cidade %s: %d.\n Número de Pontos Turísticos da Cidade %s: %d.\n", Nome_da_Cidade1, Nome_da_Cidade1, Numero_de_Pontos_Turisticos1, Nome_da_Cidade2, Numero_de_Pontos_Turisticos2);
        } else if (Numero_de_Pontos_Turisticos1 < Numero_de_Pontos_Turisticos2){
            printf("Carta 2, Cidade: %s, Venceu!!!\n Atributo Escolhido: Número de Pontos Turísticos.\n Número de Pontos Turísticos da Cidade %s: %d.\n Número de Pontos Turísticos da Cidade %s: %d.\n", Nome_da_Cidade2, Nome_da_Cidade1,Numero_de_Pontos_Turisticos1, Nome_da_Cidade2, Numero_de_Pontos_Turisticos2);
        } else {
            printf("Houve empate!\n");
        }
        break;

        case 5:
        if(Densidade_Populacional1 < Densidade_Populacional2){
            printf("Carta 1, Cidade: %s, Venceu!!!\n Atributo Escolhido: Densidade Populacional.\n Densidade Populacional da Cidade %s: %.2f.\n Densidade Populacional da Cidade %s: %.2f.\n", Nome_da_Cidade1, Nome_da_Cidade1, Densidade_Populacional1, Nome_da_Cidade2, Densidade_Populacional2);
        } else if (Densidade_Populacional1 > Densidade_Populacional2){
            printf("Carta 2, Cidade: %s, Venceu!!!\n Atributo Escolhido: Densidade Populacional.\n Densidade Populacional da Cidade %s: %.2f.\n Densidade Populacional da Cidade %s: %.2f.\n", Nome_da_Cidade2, Nome_da_Cidade1,Densidade_Populacional1, Nome_da_Cidade2, Densidade_Populacional2);
        } else {
            printf("Houve empate!\n");
        }
        break;

        default:
        printf("opção inválida\n");
    }
    
    
    return 0;
}
