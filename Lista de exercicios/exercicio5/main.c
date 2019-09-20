#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float salario=1000,porc=1.5;
    int ano;
    for(ano=2011;ano<=2019;ano++){
        salario+=(salario/100*porc);
        porc=porc*2;

        printf("Ano %d = %.2f Reais\n",ano,salario);
    }
    return 0;
}
