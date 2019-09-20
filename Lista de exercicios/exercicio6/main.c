#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"");
    system("color F0");
    float A,B,C,delta;
    //Inicio pedindo o valor de 3 variaveis.
    printf("\n   Calcular  uma equação do 2° grau.\n");
    printf("\n   Digite 3 numeros para A,B,C.\n");
    scanf("%f %f %f",&A,&B,&C);
    //Verificando a concavidade se é para cima ou para baixo.
    if(A>0){
         printf("\n  A concavidade vai ser para cima!!!\n");

           }
    else{
         printf("\n  A concavidade vai ser  para baixo !!!\n");
        }
    //Calculando o valor de delta.
    delta=(B*B)-4*A*C;
    printf("%.2f",delta);
    //Fzendo a verificação se  existe somente uma raiz real,se existe duas raizes reais ou  formula não tem raiz real.
    if(delta=0){
        printf("\n   A formula existe somente uma raiz real! \n");
    }
    else if(delta>0){
        printf("\n   A formula existe duas raizes reais!\n");
    }
    else{
        printf("\n   A formula não há raiz real!\n");
        }
        //Fim
    return 0;
}



