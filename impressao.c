#include <stdio.h>
#include <stdlib.h>

int main()
{
      int tipo_impressao;
      int quantidade_impressao;
      int encadernacao_impressao;
      int dia_impressao;
      float preco_impressao;
      float preco_encadernacao;
      float total;

      printf("servico de impressao:\n");
      printf("[1] - preto e branco\n[2] - colorida\n");
      scanf("%d", &tipo_impressao);

      if (tipo_impressao == 1) // impressao preta & branca
        {
           printf("quantidade de impressoes:\n");
           scanf("%d", &quantidade_impressao);

           if (quantidade_impressao < 10)
            {
               preco_impressao = quantidade_impressao * 0.50;
            }
              else if (quantidade_impressao >= 10 && quantidade_impressao < 20)
                    {
                       preco_impressao = quantidade_impressao * 0.50;
                    }
              else if (quantidade_impressao >= 20 && quantidade_impressao < 50)
                    {
                      preco_impressao = quantidade_impressao * 0.30;
                    }
              else if (quantidade_impressao >= 50 && quantidade_impressao < 100)
                    {
                       preco_impressao = quantidade_impressao * 0.25;
                    }
              else if (quantidade_impressao >= 100)
                    {
                       preco_impressao = quantidade_impressao * 0.15;
                    }
        }





      if (tipo_impressao == 2) // impressao colorida
        {
           printf("quantidade de impressoes:\n");
           scanf("%d", &quantidade_impressao);

           if (quantidade_impressao < 10)
            {
               preco_impressao = quantidade_impressao * 2.00;
            }
              else if (quantidade_impressao >= 10 && quantidade_impressao < 20)
                    {
                       preco_impressao = quantidade_impressao * 1.50;
                    }
              else if (quantidade_impressao >= 20 && quantidade_impressao < 50)
                    {
                      preco_impressao = quantidade_impressao * 1.25;
                    }
              else if (quantidade_impressao >= 50 && quantidade_impressao < 100)
                    {
                       preco_impressao = quantidade_impressao * 1.00;
                    }
              else if (quantidade_impressao >= 100)
                    {
                       preco_impressao = quantidade_impressao * 0.75;
                    }
        }


       printf("sera encadernado:\n");
       printf("[1] - sim\n[2] - nao\n");
       scanf("%d", &encadernacao_impressao);


       if (encadernacao_impressao == 1)   // encadernacao 
        {
            if (quantidade_impressao < 20)
            {
               preco_encadernacao = 1.50;
            }
              else if (quantidade_impressao >= 20 && quantidade_impressao <50)
                    {
                       preco_encadernacao = 2.00;
                    }
              else if (quantidade_impressao >= 50 && quantidade_impressao  < 100)
                    {
                       preco_encadernacao = 4.00;
                    }
              else if (quantidade_impressao >= 100 && quantidade_impressao < 200)
                    {
                       preco_encadernacao = 6.00;
                    }
              else if (quantidade_impressao >= 200)
                    {
                       preco_encadernacao = 10.00;
                    }
        }


        printf("hoje eh sabado:\n");
        printf("[1] - sim\n[2] - nao\n");
        scanf("%d", &dia_impressao);

        if (dia_impressao == 1)  // desconto de 10% no sabado
         {
           preco_impressao = preco_impressao - (preco_impressao * 0.1);
         }

        total = preco_impressao + preco_encadernacao; 
      
        printf("valor\n");
        printf("impressao:R$%.2f\n", preco_impressao);
        printf("encadernacao:R$%.2f\n", preco_encadernacao);
        printf("total:R$%.2f\n", total);

    return 0;
}   