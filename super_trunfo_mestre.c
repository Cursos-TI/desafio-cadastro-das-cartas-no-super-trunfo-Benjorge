#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Estruturas de decisão encadeadas e aninhadas - Nivel Mestre.
// Teste Jorge Luiz Franco matrícula 202501191231.

int main() {
    
 
    // Informações Carta 1:
    char Estado1 = 'A';
    char Codigo_da_Carta1[3] = "A01";
    char Nome_da_Cidade1[30] = "SAOPAULO-SP";
    unsigned long int Populacao1 = 12325000;
    float Area1 = 1527.11;
    float PIB1 = 699280000000;
    int Numero_de_Pontos_Turisticos1 = 30;
    
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

    int PrimeiroAtributo, SegundoAtributo, ReconhecimentoCarta2A, ReconhecimentoCarta2B, Resultado1, Resultado2;

    printf("Bem vindo ao jogo!!!!\n");
    printf("Iniciando o Jogo...\n");
    printf("Vamos comparar as cartas e ver qual é a vencedora? Vamos lá!!!\n");    
    printf("Escolha a opção do 1º atributo:\n");
    printf(" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Número de Pontos Turísticos\n 5 - Densidade Populacional\n"); 
    printf("Digite aqui: ");
    scanf("%d", &PrimeiroAtributo);

    //Escolhendo o primeiro e o segundo atributo.
    switch (PrimeiroAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População.\n\n");
        Resultado1 = Populacao1 > Populacao2 ? 1 : 0;
        break;

    case 2:
        printf("Você escolheu o atributo Área.\n\n");
        Resultado1 = Area1 > Area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu o atributo PIB.\n\n");
        Resultado1 = PIB1 > PIB2 ? 1 : 0;
        break;

    case 4:
        printf("Você escolheu o atributo Número de Pontos Turísticos.\n\n");
        Resultado1 = Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu o atributo Densidade Populacional (Lembrem-se que o menor valor para esse atributo, vence).\n\n");
        Resultado1 = Densidade_Populacional1 < Densidade_Populacional2 ? 1 : 0;
        break;

     
    default:
        printf("Opção inválida.\n\n");
        break;
    }
    
    printf("Escolha a opção do 2º atributo:\n");
    printf(" 1 - População\n 2 - Área\n 3 - PIB\n 4 - Número de Pontos Turísticos\n 5 - Densidade Populacional\n"); 
    printf("Digite aqui: ");
    scanf("%d", &SegundoAtributo);
    
    if(PrimeiroAtributo == SegundoAtributo){
        printf("O segundo atributo deve ser diferente. Tente novamente!.\n");
        printf("Digite aqui: ");
        scanf("%d", &SegundoAtributo);
    } 

    switch (SegundoAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População.\n");
        Resultado2 = Populacao1 > Populacao2 ? 1 : 0;
        break;

    case 2:
        printf("Você escolheu o atributo Área.\n");
        Resultado2 = Area1 > Area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu o atributo PIB.\n");
        Resultado2 = PIB1 > PIB2 ? 1 : 0;
        break;

    case 4:
        printf("Você escolheu o atributo Número de Pontos Turísticos.\n");
        Resultado2 = Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu o atributo Densidade Populacional (Lembrem-se que o menor valor para esse atributo, vence).\n");
        Resultado2 = Densidade_Populacional1 < Densidade_Populacional2 ? 1 : 0;
        break;

     
    default:
        printf("Opção inválida.\n");
        break;
    }

    if(Resultado1 && Resultado2){
        
            switch (PrimeiroAtributo)
            {
                case 1:
                printf("População da Carta 1: %lu.\nPopulação da Carta 2: %lu.\n", Populacao1, Populacao2);
                PrimeiroAtributo = (float)Populacao1;
                ReconhecimentoCarta2A = (float)Populacao2;            
                break;
        
            case 2:
                printf("Área da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", Area1, Area2);
                PrimeiroAtributo = Area1;
                ReconhecimentoCarta2A = Area2;
                break;
        
            case 3:
                printf("PIB da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", PIB1, PIB2);
                PrimeiroAtributo = PIB1;
                ReconhecimentoCarta2A = PIB2;
                break;
        
            case 4:
                printf("Número de Pontos Turísticos da Carta 1: %d.\nNúmero de Pontos Turísticos da Carta 2: %d.\n", Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
                PrimeiroAtributo = (float)Numero_de_Pontos_Turisticos1;
                ReconhecimentoCarta2A = (float)Numero_de_Pontos_Turisticos2;
                break;
        
            case 5:
                printf("Densidade Populacional da Carta 1: %.2f.\nDensidade Populacional da Carta 2: %.2f.\n", Densidade_Populacional1, Densidade_Populacional2);
                PrimeiroAtributo = Densidade_Populacional1;
                ReconhecimentoCarta2A - Densidade_Populacional2;
            break;
                break;
            }

            switch (SegundoAtributo)
            {
                case 1:
                printf("População da Carta 1: %lu.\nPopulação da Carta 2: %lu.\n", Populacao1, Populacao2);
                SegundoAtributo = (float)Populacao1;
                ReconhecimentoCarta2B = (float)Populacao2;            
                break;
        
            case 2:
                printf("Área da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", Area1, Area2);
                SegundoAtributo = Area1;
                ReconhecimentoCarta2B = Area2;
                break;
        
            case 3:
                printf("PIB da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", PIB1, PIB2);
                SegundoAtributo = PIB1;
                ReconhecimentoCarta2B = PIB2;
                break;
        
            case 4:
                printf("Número de Pontos Turísticos da Carta 1: %d.\nNúmero de Pontos Turísticos da Carta 2: %d.\n", Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
                SegundoAtributo = (float)Numero_de_Pontos_Turisticos1;
                ReconhecimentoCarta2B = (float)Numero_de_Pontos_Turisticos2;
                break;
        
            case 5:
                printf("Densidade Populacional da Carta 1: %.2f.\nDensidade Populacional da Carta 2: %.2f.\n", Densidade_Populacional1, Densidade_Populacional2);
                SegundoAtributo = Densidade_Populacional1;
                ReconhecimentoCarta2B = Densidade_Populacional2;
            break;
                break;
            }

            printf("Soma dos atributos da Carta 1: %.2f.\n", (float) PrimeiroAtributo + (float)SegundoAtributo);
            printf("Soma dos atributos da Carta 2: %.2f.\n", (float) ReconhecimentoCarta2A + (float)ReconhecimentoCarta2B);
            printf("A Carta 1 venceu!!!\n");


    } else if(Resultado1 != Resultado2){

        switch (PrimeiroAtributo)
        {
            case 1:
            printf("População da Carta 1: %lu.\nPopulação da Carta 2: %lu.\n", Populacao1, Populacao2);
            PrimeiroAtributo = (float)Populacao1;
            ReconhecimentoCarta2A = (float)Populacao2;            
            break;
    
        case 2:
            printf("Área da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", Area1, Area2);
            PrimeiroAtributo = Area1;
            ReconhecimentoCarta2A = Area2;
            break;
    
        case 3:
            printf("PIB da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", PIB1, PIB2);
            PrimeiroAtributo = PIB1;
            ReconhecimentoCarta2A = PIB2;
            break;
    
        case 4:
            printf("Número de Pontos Turísticos da Carta 1: %d.\nNúmero de Pontos Turísticos da Carta 2: %d.\n", Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
            PrimeiroAtributo = (float)Numero_de_Pontos_Turisticos1;
            ReconhecimentoCarta2A = (float)Numero_de_Pontos_Turisticos2;
            break;
    
        case 5:
            printf("Densidade Populacional da Carta 1: %.2f.\nDensidade Populacional da Carta 2: %.2f.\n", Densidade_Populacional1, Densidade_Populacional2);
            PrimeiroAtributo = Densidade_Populacional1;
            ReconhecimentoCarta2A - Densidade_Populacional2;
        break;
            break;
        }

        switch (SegundoAtributo)
        {
            case 1:
            printf("População da Carta 1: %lu.\nPopulação da Carta 2: %lu.\n", Populacao1, Populacao2);
            SegundoAtributo = (float)Populacao1;
            ReconhecimentoCarta2B = (float)Populacao2;            
            break;
    
        case 2:
            printf("Área da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", Area1, Area2);
            SegundoAtributo = Area1;
            ReconhecimentoCarta2B = Area2;
            break;
    
        case 3:
            printf("PIB da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", PIB1, PIB2);
            SegundoAtributo = PIB1;
            ReconhecimentoCarta2B = PIB2;
            break;
    
        case 4:
            printf("Número de Pontos Turísticos da Carta 1: %d.\nNúmero de Pontos Turísticos da Carta 2: %d.\n", Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
            SegundoAtributo = (float)Numero_de_Pontos_Turisticos1;
            ReconhecimentoCarta2B = (float)Numero_de_Pontos_Turisticos2;
            break;
    
        case 5:
            printf("Densidade Populacional da Carta 1: %.2f.\nDensidade Populacional da Carta 2: %.2f.\n", Densidade_Populacional1, Densidade_Populacional2);
            SegundoAtributo = Densidade_Populacional1;
            ReconhecimentoCarta2B = Densidade_Populacional2;
        break;
            break;
        }

        printf("Soma dos atributos da Carta 1: %.2f.\n", (float) PrimeiroAtributo + (float)SegundoAtributo);
        printf("Soma dos atributos da Carta 2: %.2f.\n", (float) ReconhecimentoCarta2A + (float)ReconhecimentoCarta2B);
        printf("O jogo empatou!!.\n");
    } else {
        switch (PrimeiroAtributo)
        {
            case 1:
            printf("População da Carta 1: %lu.\nPopulação da Carta 2: %lu.\n", Populacao1, Populacao2);
            PrimeiroAtributo = (float)Populacao1;
            ReconhecimentoCarta2A = (float)Populacao2;            
            break;
    
        case 2:
            printf("Área da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", Area1, Area2);
            PrimeiroAtributo = Area1;
            ReconhecimentoCarta2A = Area2;
            break;
    
        case 3:
            printf("PIB da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", PIB1, PIB2);
            PrimeiroAtributo = PIB1;
            ReconhecimentoCarta2A = PIB2;
            break;
    
        case 4:
            printf("Número de Pontos Turísticos da Carta 1: %d.\nNúmero de Pontos Turísticos da Carta 2: %d.\n", Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
            PrimeiroAtributo = (float)Numero_de_Pontos_Turisticos1;
            ReconhecimentoCarta2A = (float)Numero_de_Pontos_Turisticos2;
            break;
    
        case 5:
            printf("Densidade Populacional da Carta 1: %.2f.\nDensidade Populacional da Carta 2: %.2f.\n", Densidade_Populacional1, Densidade_Populacional2);
            PrimeiroAtributo = Densidade_Populacional1;
            ReconhecimentoCarta2A - Densidade_Populacional2;
        break;
            break;
        }

        switch (SegundoAtributo)
        {
            case 1:
            printf("População da Carta 1: %lu.\nPopulação da Carta 2: %lu.\n", Populacao1, Populacao2);
            SegundoAtributo = (float)Populacao1;
            ReconhecimentoCarta2B = (float)Populacao2;            
            break;
    
        case 2:
            printf("Área da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", Area1, Area2);
            SegundoAtributo = Area1;
            ReconhecimentoCarta2B = Area2;
            break;
    
        case 3:
            printf("PIB da Carta 1: %.2f.\nÁrea da Carta 2: %.2f.\n", PIB1, PIB2);
            SegundoAtributo = PIB1;
            ReconhecimentoCarta2B = PIB2;
            break;
    
        case 4:
            printf("Número de Pontos Turísticos da Carta 1: %d.\nNúmero de Pontos Turísticos da Carta 2: %d.\n", Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
            SegundoAtributo = (float)Numero_de_Pontos_Turisticos1;
            ReconhecimentoCarta2B = (float)Numero_de_Pontos_Turisticos2;
            break;
    
        case 5:
            printf("Densidade Populacional da Carta 1: %.2f.\nDensidade Populacional da Carta 2: %.2f.\n", Densidade_Populacional1, Densidade_Populacional2);
            SegundoAtributo = Densidade_Populacional1;
            ReconhecimentoCarta2B = Densidade_Populacional2;
        break;
            break;
        }

        printf("Soma dos atributos da Carta 1: %.2f.\n", (float) PrimeiroAtributo + (float)SegundoAtributo);
        printf("Soma dos atributos da Carta 2: %.2f.\n", (float) ReconhecimentoCarta2A + (float)ReconhecimentoCarta2B);
        printf("A Carta 2 ganhou!!!");
    }
    


    return 0;
}
