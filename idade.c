#include <stdio.h>
#define stop -99

int main()
{
    int idade;
    int cont_idade_menor = 0;
    int cont_idade_maior = 0;
    
    do{
        scanf("%d", &idade);
        
        if(idade > 0 && idade < 21) {
           cont_idade_menor++;
        }
         else if(idade > 50){
            cont_idade_maior++;
        }
        
    }while(idade != stop);
    
    printf("pessoas com idade menor que 21 anos:%d\n", cont_idade_menor);
    printf("pessoas com idade maior que 50 anos:%d", cont_idade_maior);

    return 0;
}
