//ALOCAÇÃO DINÂMICA DE VETORES:

#include <stdio.h>
#include <stdlib.h> // arquivo de header necessário para usar malloc e free

int main (){
    //DEFININDO UM PONTEIRO
    int *x; //x é um ponteiro tipo int 
    x = malloc(10 *sizeof(int)); //x é um ponteiro que recebe o endereço do primeiro byte que foi retornado pelo malloc após fazer a alocação. Sizeof calcula quantos bytes serão necessários para representar aquela quantidade de posições desejadas dependendo o tipo fornecido.
    x[1] = 3;

    //INICIANDO O VETOR PREENCHENDO ELE COM ALGO
    for(int i = 0; i < 10; i++){
        x[i] = 0;
        printf("%d\n", x[i]);
    }

    free(x); //free(x) libera a memória que começa naquele endereço que x recebeu.
    return 0;
}


//================================== ANOTAÇÕES: =================================================
// Alocação dinâmica de memória nada mais é do que permitir o código use EXATAMENTE a memória necessária no momento de execução e depois a libere.
// A ideia da alocação dinâmica é que a memória após usada seja liberada logo em seguida, permitindo que essa memória possa ser usada pelas próximas atribuições ou programas.
// Para ter acesso a essa faixa de memória alocada sem que ela "se perca" é necessário usar ponteiros
// O ponteiro guardará o endereço do primeiro byte que dá início a sequência de memória que foi alocada.
// Alocação dinâmica é realizada no heap da memória virtual enquanto arrays são alocados no stack da memória virtual
// A alocação é feita com uma função chamada de "malloc()"
// A liberação é feita com free(ponteiro)
// Tentar liberar memória mais de uma vez gera um erro conhecido como "double free"
// REGRA: Para cada malloc() deve haver um free(). Isso evita vazamentos de memória.
//1. Não acesse blocos de memória que já foram liberados, pois esse bloco já não pertence ao programa
//2. Libere blocos de memória dependentes na ordem INVERSA que foram alocados para que não se perca como chegar em um bloco que dependia de outro (ponteiros perdidos)
//3. sempre que sair de uma subrotina e não precisar mais dela, libere a memória.
// A iniciação do vetor é de extrema importância para verificar se a alocação se deu de forma correta. SEMPRE FAZER ISSO.
