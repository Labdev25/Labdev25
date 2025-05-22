#include <stdio.h>
int main(){
    char estado1 [30];
    char nome1 [30];
    char codigo1 [30];
    int populacao1;
    int pt1;
    float area1, pib1;
   
    char estado2 [30];
    char nome2 [30];
    char codigo2 [30];
    int populacao2;
    int pt2;
    float area2, pib2;
   
    //lendo as informaçoes da carta 1

     printf("Carta 1 \n");

        printf("Digite uma letra de A-H representando seu estado: \n");
        scanf("%s", &estado1);

        printf("Digite o codigo da carta(letra seguida de um numero): \n");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome1);

        printf("Digite a área: \n");
        scanf("%f", &area1);

        printf("Digite o pib: \n");
        scanf("%f", &pib1);

        printf("Digite a população: \n");
        scanf("%d", &populacao1);
        
        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &pt1);

//lendo as informaçoes da carta 2
      printf("Carta 2 \n");

        printf("Digite seu estado: \n");
        scanf("%s", &estado2);

        printf("Digite o codigo da carta: \n");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome2);

        printf("Digite a área: \n");
        scanf("%f", &area2);

        printf("Digite o pib: \n");
        scanf("%f", &pib2);
        
        printf("Digite a população: \n");
        scanf("%d", &populacao2);

        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &pt2);

  //exibindo as cartas
   

         printf("\n--- Carta 1 ---\n");

         printf("Estado: %s\n", estado1);
         
         printf("Codigo: %s\n", codigo1);
 
         printf("Cidade: %s\n", nome1);
 
         printf("Populacao: %d\n", populacao1);
 
         printf("Area: %.2f km²\n", area1);
 
         printf("PIB: %.2f\n", pib1);
 
         printf("Pontos turisticos: %d\n", pt1);
         
          printf("\n--- Carta 2 ---\n");

         printf("Estado: %s\n", estado2);
      
         printf("Codigo: %s\n", codigo2);
 
         printf("Cidade: %s\n", nome2);
 
         printf("Populacao: %d\n", populacao2);
 
         printf("Area: %.2f km²\n", area2);
 
         printf("PIB: %.2f\n", pib2);
 
         printf("Pontos turisticos: %d\n", pt2);

return 0;
}