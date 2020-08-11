/*
  Disciplina de Algoritmos de Programa��o (INF01202) - Turma H
  Aluno: Jo�o Luiz Grave Gross 	
  Matr�cula: 180171
  Atividade: Exerc�cio de Avalia��o 4.6.
  Date: 15/03/09 19:56
  Description: Recebido um c�digo alfab�tico e valores apropriados a cada caso, calcule e imprima: 

  C�digo       C�lculo
  c            convers�o de um valor expresso em polegadas para cent�metros 
  j            dura��o de um jogo
  m            determina��o de qual o menor de tr�s valores inteiros fornecidos
 
 convers�o: 1 polegada - 2,54 cm  x=pol*2.54
            2          - x

 dura��o do jogo: ser�o fornecidas as horas inicial e final do jogo (horas inteiras). O jogo pode 
 durar de 1 a 24 horas, mas pode iniciar em um dia e terminar em outro.
 
 Entradas: c�digo alfab�tico
*/


#include<stdlib.h>
#include<stdio.h>

int main ()
{
    char code;
    float pol, cent;
    int time_1, time_2, time;
    printf ("Digite o codigo alfab�tico: ");
    scanf ("%c",&code);
    switch (code)
    {
           case 'c': printf ("Digite o valor para conversao: ");
                     scanf ("%f",&pol);
                     cent = pol*2.54;
                     printf ("%.2f polegadas = %.2f centimetros\n\n",pol,cent);
                     break;
           case 'j': printf ("Inicio do jogo: ");
                     scanf ("%d",&time_1);
                     printf ("Termino do jogo: ");
                     scanf ("%d",&time_2);
                     if (time_1>time_2)
                     {  
                     time = (24-time_1)+time_2;
                     printf ("Duracao do jogo: %dh\n\n",time);   
                     }
                     if (time_1<time_2)
                     {  
                     time = time_2-time_1;
                     printf ("Duracao do jogo: %dh\n\n",time);   
                     }
                     if (time_1==time_2)
                        printf ("Duracao do jogo: 24h\n\n");
                     break;
           case 'm': printf ("Digite tres valores: ");
                     scanf ("%d%d%d",&time_1,&time_2,&time);
                     if (time_1<time_2 && time_1<time)
                        printf ("Menor valor: %d\n\n",time_1);
                     else
                     {
                         if (time_2<time_1 && time_2<time)
                            printf ("Menor valor: %d\n\n",time_2);
                         else
                         {
                             if (time<time_1 && time<time_2)
                                printf ("Menor valor: %d\n\n",time);
                             else
                                printf ("Valores iguais\n\n");    
                         }
                     }
                     break;
           default: printf ("Codigo nao existente. Tente novamente.\n\n");
    }
    system ("pause");
    return 0;
}
