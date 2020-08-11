/*
  Disciplina de Algoritmos de Programa��o (INF01202) - Turma H
  Aluno: Jo�o Luiz Grave Gross 	
  Matr�cula: 180171
  Atividade: Exerc�cio de Fixa��o 6.2
  Date: 21/03/09 15:39
  Description: Fa�a um programa que leia dois valores (o primeiro um caractere e o segundo um valor real).
   
  O primeiro valor servir� de indicador de opera��o e o segundo corresponder� ao raio de uma circunfer�ncia.
  
  Caso o primeiro valor lido seja igual a a, calcular e imprimir a �rea dessa circunfer�ncia.

  Se o valor lido for p, calcular e imprimir o per�metro da circunfer�ncia.
  
  E se o valor lido for diferente desses dois valores, imprimir uma mensagem dizendo que o indicador de opera��o 
  foi mal fornecido.

*/

#include<stdlib.h>
#include<stdio.h>

int main ()
{
    char operacao;
    float raio;
    printf ("Escolha a operacao:\nDigite 'a' para calcular a area da circunferencia ou 'p' para calcular o perimetro: ");
    scanf ("%c",&operacao);
    printf ("Digite o raio: ");
    scanf ("%f",&raio);
    if (raio < 0)
       operacao = 'b';
    switch (operacao)
    {
           case 'a':
           case 'A': raio = 3.14 * raio * raio;
                     printf ("Area: %.2f\n\n",raio);
                     break;
           case 'p':
           case 'P': raio = 6.28 * raio;
                     printf ("Perimetro: %.2f\n\n",raio);
                     break;
           default: printf ("Operacao invalida ou raio negativo\n\n");
    }
    system ("pause");
    return 0;    
}


