#include <stdio.h>

int main(){

    char estado1[20], estado2[20];
    int codigo1, codigo2;
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;
    float dp1, dp2;
    float pibp1, pibp2;


    //Crie as variáveis da primeira e segunda cartas juntas// 

    printf("Digite o estado da primeira carta:");
    scanf(" %s", estado1);

    printf("Digite o código da primeira carta:");
    scanf("%d", &codigo1);

    printf("Digite o nome da primeira carta:");
    scanf("%s", nome1);

    printf("Digite a população da primeira carta:");
    scanf("%lu", &populacao1);

    printf("Digite a área da primeira carta:");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira carta:");
    scanf("%d", &ponto1);

    dp1 = populacao1 / area1;

    pibp1 = pib1 / populacao1;

    float superpoder1 = (populacao1 + area1 + pib1 + ponto1 + pibp1 + (1 / dp1));
    

    //Aqui todas as informações da carta vão ser atribuídas às respectivas variáveis//

    printf("\nCarta 1\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%d\n", estado1, codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km^2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", pibp1);
    printf("Super Poder: %.0f\n", superpoder1);
    printf("\nPrimeira Carta Completa\nInsira as informações da segunda carta a seguir\n\n");

    //Informações da primeira carta serão exibidas, e haverá confirmação para começar a segunda carta//
    printf("Digite o estado da segunda carta: ");
    scanf(" %s", estado2);

    printf("Digite o código da segunda carta:");
    scanf("%d", &codigo2);

    printf("Digite o nome da segunda carta:");
    scanf("%s", nome2);

    printf("Digite a população da segunda carta:");
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda carta:");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda carta:");
    scanf("%d", &ponto2);

    dp2 = populacao2 / area2;
    pibp2 = pib2 / populacao2;
    float superpoder2 = (populacao2 + area2 + pib2 + ponto2 + pibp2 + (1 / dp2));

    printf("\nCarta 1\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%d\n", estado1, codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km^2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", pibp1);
    printf("Super Poder: %.0f\n", superpoder1);
    printf("\n========================================\n");
    printf("           FIM DA CARTA 1\n");
    printf("========================================\n");
    printf("\n\nCarta 2\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%d\n", estado2, codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per Capita: %.2f\n", pibp2);
    printf("Super Poder: %.0f\n", superpoder2);
    printf("\n========================================\n");
    printf("           FIM DA CARTA 2\n");
    printf("========================================\n");

    //Agora vou criar um menu, e usar o switch para redirecionar o jogador para a sua escolha
    printf("** ESCOLHA UMA DAS OPÇÕES ABAIXO **\n");
    int opcao;
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

    //Aqui o jogo acontece
    switch (opcao){
        case 1:
        int escolha;
        printf("Escolha um atributo para jogar\n");
        printf("1. População   ");
        printf("5. Densidade Populacional\n");
        printf("2. Área   ");
        printf("6. PIB per Capita\n");
        printf("3. PIB   ");
        printf("7. Super Poder\n");
        printf("4. Pontos Turísticos\n");
        scanf("%d", &escolha);

        if (escolha == 1){
            if (populacao1 > populacao2){
                printf("A Carta 1 (%s) vence, possuindo uma população de %lu habitantes, contra os %lu da Carta 2 (%s)", estado1, populacao1, populacao2, estado2);
            }
            else if (populacao1 < populacao2){
                printf("A Carta 2 (%s) vence, possuindo uma população de %lu habitantes, contra os %lu da Carta 1 (%s)", estado2, populacao2, populacao1, estado1);
            }
            else{
                printf("Empate!");
            }
        }
        else if (escolha == 2){
            if (area1 > area2){
                printf("A Carta 1 (%s) vence, com uma área de %.2f km^2, contra os %.2f kms^2 da Carta 2 (%s)", estado1, area1, area2, estado2);
            }
            else if (area2 > area1){
                printf("A Carta 2 (%s) vence, com uma área de %.2f km^2, contra os %.2f kms^2 da Carta 1 (%s)", estado2, area2, area1, estado1);
            }
            else{
                printf("Empate!");
            }
        }
        else if (escolha == 3){
            if (pib1 > pib2){
                printf("A Carta 1 (%s) vence, com um PIB de %.2f, contra os %.2f da Carta 2 (%s)", estado1, pib1, pib2, estado2);
            }
            else if (pib2 > pib1){
                printf("A Carta 2 (%s) vence, com um PIB de %.2f, contra os %.2f da Carta 1 (%s)", estado2, pib2, pib1, estado1);
            }
            else{
                printf("Empate!");
            }
        }
        else if (escolha == 4){
            if (ponto1 > ponto2){
                printf("A Carta 1 (%s) vence, com uma quantidade de %d pontos turísticos, contra os %d da Carta 2 (%s)", estado1, ponto1, ponto2, estado2);
            }
            else if (ponto2 > ponto1){
                printf("A Carta 2 (%s) vence, com uma quantidade de %d pontos turísticos, contra os %d da Carta 1 (%s)", estado2, ponto2, ponto1, estado1);
            }
            else{
                printf("Empate!");
            }
        }
        else if (escolha == 5){
            if (dp1 < dp2){
                printf("A Carta 1 (%s) vence, com uma densidade populacional de %.2f habitantes por km^2, contra os %.2f habitantes por km^2 da Carta 2 (%s)", estado1, dp1, dp2, estado2);
            }
            else if (dp2 < dp1){
                printf("A Carta 2 (%s) vence, com uma densidade populacional de %.2f habitantes por km^2, contra os %.2f habitantes por km^2 da Carta 1(%s)", estado2, dp2, dp1, estado1);
            }
            else{
                printf("Empate");
            }
        }
        else if (escolha == 6){
            if (pibp1 > pibp2){
                printf("A Carta 1 (%s) vence, com um PIB per Capita de %.2f, contra os %.2f da Carta 2 (%s)", estado1, pibp1, pibp2, estado2);
            }
            else if (pibp2 > pibp1){
                printf("A Carta 2 (%s) vence, com um PIB per Capita de %.2f, contra os %.2f da Carta 1 (%s)", estado2, pibp2, pibp1, estado1);
            }
            else{
                printf("Empate!");
            }
        }
        else{
            if (superpoder1 > superpoder2){
                printf("A Carta 1 (%s) vence, com um Super Poder de %d, contra os %d da Carta 2 (%s)", estado1, superpoder1, superpoder2, estado2);
            }
            else if (superpoder2 > superpoder1){
                printf("A Carta 2 (%s) vence, com um Super Poder de %d, contra os %d da Carta 1 (%s)", estado2, superpoder2, superpoder1, estado1);
            }
            else{
                printf("Empate!");
            }
        }
        //As regras do jogo são visualizadas aqui
        case 2:
            printf("O atributo que você escolher será comparado entre as duas cartas, e vencerá a carta que tiver maior número nesse atributo, com exceção de ***Densidade Populacional***, que vencerá o menor número");
        //Aqui o programa se encerra caso o Jogador não queira jogar
        case 3:
        return (0);
        //Garantia de que o terminal sempre responderá à qualquer informação do usuário
        default:
        printf("Opção Inválida");
    }
}