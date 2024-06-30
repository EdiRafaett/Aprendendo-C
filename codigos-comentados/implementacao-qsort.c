//exemplo de implementação do qsort

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int values[] = { 40, 10, 100, 90, 20, 25 };

int compare (const void * a, const void * b) // A função exige que seja fornecido dois ponteiros para void (ponteiros genéricos)
{
  return ( *(int*)a - *(int*)b ); //Converte os ponteiros para inteiros e faz a subtração
}

int main ()
{
  int n;
  qsort (values, 6, sizeof(int), compare);
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);
  return 0;
}

//ANOTAÇÕES:
//A função q sort é uma função genérica de ordenação que pode ser usada para ordenar qualquer tipo de dado.
//Essa função já é implementada na biblioteca padrão do C.
