//ALOCANDO MATRIZ DINAMICAMENTE: FORMA EDIFICIENTE
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int **x; //ponteiro para ponteiro para int
    int nl = 4, nc = 5;
    x = malloc(nl*sizeof(int*)); //x recebe do malloc o enedereço do primeiro elemento do bloco auxiliar alocado 
    x[0] = malloc(nc*nl*sizeof(int)); // a posição zero do bloco auxiliar recebe o endereço inicial do bloco de memória alocado para todas as linhas e elementos (colunas)
    for(int i = 1; i < nl; i++){
        x[i] = x[i-1] + nc; // calcula e guarda o endereço de início de cada linha da matriz nas demais posições do bloco auxiliar 
    }
    
    x[1][2] = 3;
    free(x[0]); //Só é necessário liberar a posição zero (único alocado)
    free(x);
}

//ANOTAÇÕES:
//Essa maneira é mais eficiente visto que as linhas da matriz são todas alocadas de uma única vez (um único bloco de memória)
//Para cada linha um malloc e um free pode ser ineficiente e demorado.
//O bloco auxiliar guarda os endereços de início de cada linhas em um bloco contínuo de memória 
//Chama-se o malloc uma única vez