/*
  Disciplina de Algoritmos de Programa��o (INF01202) - Turma H
  Aluno: Jo�o Luiz Grave Gross 	
  Matr�cula: 180171
  Atividade: Exerc�cio de Fixa��o 6.2
  Date: 21/03/09 15:31
  Description: Fa�a um programa para imprimir o conceito de um aluno, dada a sua nota. Supor notas inteiras somente.
  O crit�rio para os conceitos � o seguinte:
  
  nota inferiores a 3          - conceito E
  nota de 3 a 5                - conceito D
  notas  6 e 7                 - conceito C
  notas 8 e 9                  - conceito B
  nota 10                      - conceito A
*/

#include<stdlib.h>
#include<stdio.h>

int main ()
{
    int nota;
    printf ("Digite sua nota: ");
    scanf ("%i",&nota);
    switch (nota)
    {      
           case 0:
           case 1:
           case 2: printf ("Conceito: E\n\n");
                   break;
           case 3:
           case 4:
           case 5: printf ("Conceito: D\n\n");
                   break;
           case 6:
           case 7: printf ("Conceito: C\n\n");
                   break;
           case 8:
           case 9: printf ("Conceito: B\n\n");
                   break;
           case 10: printf ("Conceito: A\n\n");
                    break;
           default: printf ("Nota informada menor que zero ou maior que 10. Tente novamente\n\n");
    }
    system ("pause");
    return 0;
}



