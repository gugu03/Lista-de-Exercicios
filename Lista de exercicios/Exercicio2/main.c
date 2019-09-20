1#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"");
     system("color F0");
     float salario,novoSalario;
     printf("Digite o valor do salario.\n");scanf("%f",&salario);
     if(salario==998){
        novoSalario=(salario*0.2)+salario;
        printf("Seu novo salario e %.2f",novoSalario);
     }
     else if(salario>998){
        novoSalario=(salario*0.1)+salario;
         printf("Seu novo salario e %.2f",novoSalario);
     }
     else{
        printf("Salario %.2f",salario);
     }
    return 0;
}
