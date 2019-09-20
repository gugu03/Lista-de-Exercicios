#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"");
   system("color F0");
   float A,B,raiz,X;
   printf("Digite o valor de A e B para calcule o valor da raiz de uma função de 1º grau (Função Linear)\n");
   printf("Digite um valor para A que seja diferente de 0.\n");
   scanf("%f",&A);
   printf("Digite um valor para B que seja diferente de 0.\n");
   scanf("%f",&B);
   X=-B/A;
   raiz=A*X+B;
   printf("O resultado da equacao e %.2f",raiz);

    return 0;
}
