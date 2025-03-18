#include <stdio.h>
    int main() {
        // Declarando variáveis da carta 1
        char estadoCarta1[50];
        char codigoCarta1[50];
        char nomeCidade1[50];
        int  populacaoCarta1;  
        float areaCarta1;
        float pibCarta1;
        int pontosTuristicos1;

        // Declarando variáveis da carta 2
        char estadoCarta2[50];
        char codigoCarta2[50];
        char nomeCidade2[50];
        int populacaoCarta2;
        float areaCarta2;
        float pibCarta2;
        int pontosTuristicos2;

        // Solicitando os dados da carta 1 ao usuário

    printf("Digite a primeira letra do Estado:'A a H'\n");
    scanf("%s" , &estadoCarta1);

    printf("Digite o codigo da carta:\n");
    scanf("%s" , &codigoCarta1);

    printf("Nome da cidade:\n");
    scanf("%s" , &nomeCidade1);

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacaoCarta1);

    printf("Digite a area da cidade:\n");
    scanf("%f", &areaCarta1);

    printf("Digite o pib da cidade:\n");
    scanf("%f" , &pibCarta1);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d" , &pontosTuristicos1);

    printf("\n");

    // Solicitando os dados da carta 2 ao usuário

    printf("Digite a primeira letra do Estado:'A a H'\n");
    scanf("%s" , &estadoCarta2);

    printf("Digite o codigo da carta:\n");
    scanf("%s" , &codigoCarta2);

    printf("Nome da cidade:\n");
    scanf("%s" , &nomeCidade2);

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacaoCarta2);

    printf("Digite a area da cidade:\n");
    scanf("%f", &areaCarta2);

    printf("Digite o pib da cidade:\n");
    scanf("%f" , &pibCarta2);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d" , &pontosTuristicos2);

    printf("\n");


    // Imprimindo os dados inseridos pelo usuário
    printf("IMPRIMINDO OS DADOS INSERIDOS\n");

    // Imrimindo os dados da carta 1
    printf("Carta1:\n");
    printf("Estado:%s\n", estadoCarta1);
    printf("Código:%s\n", codigoCarta1);
    printf("Nome da Cidade:%s\n", nomeCidade1) ;
    printf("População:%d\n", populacaoCarta1);
    printf("Área:%f\n", areaCarta1);
    printf("PIB:%f\n",pibCarta1);
    printf("Pontos Turísticos:%d\n", pontosTuristicos1);

    // Imprimindo os dados da carta 2
    printf("Carta2:\n");
    printf("Estado:%s\n", estadoCarta2);
    printf("Código:%s\n", codigoCarta2);
    printf("Nome da Cidade:%s\n", nomeCidade2) ;
    printf("População:%d\n", populacaoCarta2);
    printf("Área:%f\n", areaCarta2);
    printf("PIB:%f\n",pibCarta2);
    printf("Pontos Turísticos:%d\n", pontosTuristicos1);

    return 0;
    }


