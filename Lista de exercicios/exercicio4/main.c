
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"");
    system("color F0");
    int i,periodo;
    float nota1,nota2,notaTotal,media;
    char nome[10],Curso;
    printf("");
    for(i=0; i<10; i++)
    {

        printf("\nDigite o nome do aluno!\n");
        scanf("%s",&nome[i]);
        system("cls");
        printf("\nDigite o numero do periodo!\n");
        scanf("%d",&periodo);
        system("cls");
        printf("\nDigite o curso!\n");
        scanf("%s",&Curso);
        system("cls");
        printf("\nDigite a nota do 1ºBimestre!\n");
        scanf("%f",&nota1);
        system("cls");
        printf("\nDigite a nota do 2ºBimestre!\n");
        scanf("%f",&nota2);
        system("cls");
        notaTotal=nota1+nota2;
        media=notaTotal/2;
        printf("A media do aluno(a) foi %.2f .",media);
          if(notaTotal>=70){
            printf("\nAluno(a) aprovado!!!");

        }
            else if (notaTotal>=40 && notaTotal<=69.99){
            printf("\nAluno(a) ficou de prova substitutiva !!!");

        }
        else if (notaTotal<40){
            printf("\nAluno(a) reprovado!!!");

        }

    }



    return 0;
}
