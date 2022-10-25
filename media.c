#include <stdio.h>

int main()
{    
    float P1, P2, P3;
    float peso1 = 1.5, peso2 = 3.0, peso3 = 1.5;
    float MT;
    float M;
    float Mf;
    float EXAM;
    
    printf("entre com a Prova 1:\n");
    scanf("%f", &P1);
    printf("entre com a Prova 2:\n");
    scanf("%f", &P2);
    printf("entre com a Prova 3:\n");
    scanf("%f", &P3);
    
    printf("entre com Media dos Trabalhos:\n");
    scanf("%f", & MT);
    
    M = (peso1 * P1 + peso2 * P2 + peso3 * P3 + 4*MT)/10;
    
    if(M >= 5.0)
    {
        printf("Nao eh necessario realizar o exame.\n");
        printf("Media final:%.1f", M);
        printf("\nO ALUNO FOI APROVADO.");
    }
    
    
    if(M < 5.0)
    {
        printf("## Eh necessario realizar o exame. ##\n");
        printf("entre com media nota do exame:\n");
        scanf("%f", &EXAM);
        Mf = (M + EXAM)/2;
        
        
        if(Mf >= 5.0)
        {
           printf("Nota do exame:\n");                                                                                                                               
           printf("Media final:%.1f", Mf);   
           printf("O ALUNO FOI APROVADO.\n");
        }
        else{
           printf("Nota do exame:%.1f\n",EXAM);                                                                                                                               
           printf("Media final:%.1f", Mf);   
           printf("\nO ALUNO FOI REPROVADO.");
        }
    }
    return 0;
}


