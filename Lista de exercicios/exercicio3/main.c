#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    system("color F0");
    int i,idade ,media;
    float peso;
    char nome[7],genero;
    printf("Calcular a média de 7 candidatos");
    for(i=0;i<7;i++){
            printf("\nDigite seu nome %d!\n",i);
            scanf("%s",&nome[i]);
            system("cls");
            printf("\nDigite sua idade!\n");
            scanf("%d",&idade);
            system("cls");
            printf("\nDigite seu genero!\n");
            scanf("%s",&genero);
            system("cls");
            printf("\nDigite seu peso!\n");
            scanf("%f",&peso);
            system("cls");

            media=media+idade;
            }
            media=media/7;
            printf("A media dos candidatos foi %.2d",media);





    return 0;
}
