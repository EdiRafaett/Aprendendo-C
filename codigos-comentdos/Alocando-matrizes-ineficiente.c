// Alocação de matrizes ineficiente:
#include <stdio.h>
#include <stdlib.h>

int main(){
    int nl = 4, nc = 5, i;
    int **x; //ponteiro para ponteiro
    //Alocação de bloco de memória auxiliar
    x = malloc(nl*sizeof(int*)); // A variável x recebe do malloc() o endereço inicial do segmento de memória reservado para o array auxiliar(array de arrays = que guarda endereço de outros arrays) 
    //Alocando as linhas da matriz
    for(i = 0; i < nl; i++){
        x[i] = malloc(nc*sizeof(int)); // Preenchendo array auxiliar (array de arrays)
    }
    x[1][2] = 3;
    
    //fazendo liberação de memória no sentido inverso da alocação
    for(i = 0; i < nl; i++){
        free(x[i]); //liberação das linhas
    }
    free(x); //Liberação do array auxiliar
    
    return 0;
}

//ANOTAÇÕES:
// Matrizes alocadas no stack são chamadas de arrays
//O nome matrizes é dado aquelas que são alocadas dinamicamente, ou seja, no heap
// Matrizes em c necessitam de ponteiros multidimensionais
// se ** bidimensional
// se *** tridimensional 
// ****... por ai vai
//ESTE CÓDIGO:
// x é um ponteiro que aponta para o primeiro elemento de um array que será preenchido com endereços de memória, ou seja, x é um ponteiro para pronteiros
// Alocação do array auxiliar: esse array é preparado para receber endereços de outros arrays.
// Preenchimento do array auxiliar: Cada posição do array auxiliar recebe o endereço de uma das linhas da matriz (arrays) que foram alocadas dinamicamente de forma separada. 
//OBS: Esse processo de alocação não é tão eficiente pos as linhas da matriz são alocadas de forma separadas na memória, isso gera atrazos em por exemplo fazer uma cópia dessa matriz.
