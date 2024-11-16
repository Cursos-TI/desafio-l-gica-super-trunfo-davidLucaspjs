#include <stdio.h>

int main() {
   
char nomeCidade1 [100];
    char nomeCidade2 [100];
    char codigo_da_cidade1 [20];
    char codigo_da_cidade2 [20];
    int pontosTuristicos1, pontosTuristicos2; //numero de pontos turisticcos
    float area1, area2;     // em Km²
    int pib1, pib2;        // Em milhões
    float populacao1, populacao2; //Em milhôes
   
    printf("Desafio de logica super trunfo \n");


    printf("Insira os dados conforme solicitado \n");
   
    printf("Digite o código da primeira cidade: \n");
    scanf("%s", &codigo_da_cidade1);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);


   
    printf("Quantos pontos turisticos há na cidade? \n");
    scanf("%d", &pontosTuristicos1);


    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);


    printf("Qual é o PIB? \n");
    scanf("%d", &pib1);


    printf("Qual a populção da cidade? \n");
    scanf("%f", &populacao1);




    printf("Digite o código da segunda cidade: \n");
    scanf("%s", codigo_da_cidade2);
 




    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nomeCidade2);


   
    printf("Quantos pontos turisticos? \n");
    scanf("%d", &pontosTuristicos2);


    printf("Qual a área ?\n");
    scanf("%f", &area2);
       
    printf("Qual é o PIB? \n");
    scanf("%d", &pib2);


    printf("Qual a populção da cidade? \n");
    scanf("%f", &populacao2);


        

        printf("Carta da cidade 1 \n");
        printf("Cidade: %s - Código: %s \n", nomeCidade1, codigo_da_cidade1);
        printf("Pontos turisticos: %d \n", pontosTuristicos1);
        printf("Área: %f Km² \n", area1);
        printf("PIB: %d Mi \n", pib1);
        printf("A população é: %f Mi \n", populacao1); ("\n");


        printf("Carta da cidade 2 \n");
        printf("Cidade: %s  - Código: %s \n", nomeCidade2, codigo_da_cidade2);
        printf("Pontos turisticos: %d \n", pontosTuristicos2);
        printf("Área: %f Km² \n", area2);
        printf("PIB: %d Mil \n", pib2);
        printf("A população é: %f Mi \n", populacao2);


            printf("Pontuação das cidades:\n");
           
            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Tem mais pontos turisticos: %s \n", nomeCidade1);
            } else{
                printf("Tem mais pontos turisticos: %s \n", nomeCidade2 );
            }
            if(area1 > area2) {
                printf("Maior área: %s \n",  nomeCidade1);
            } else {
                printf("Maior área: %s \n",  nomeCidade2);
            }    
            if(pib1 > pib2) {
                printf("Maior PIB: %s \n", nomeCidade1);
            } else{
                printf("Maior PIB: %s \n", nomeCidade2);
            }
            if( populacao1 > populacao2) {
                printf("Maior poupulação: %s\n", nomeCidade1);
            } else{
                printf("Maior poupulação: %s\n", nomeCidade2);
            }
    
    if( pib1 > pib2 , populacao1 > populacao2 )
    {
        printf("%s é a cidade campeã!\n", nomeCidade1);

    } else {
        printf("%s é a cidade campeã!\n", nomeCidade2);
    }

    return 0;
}
