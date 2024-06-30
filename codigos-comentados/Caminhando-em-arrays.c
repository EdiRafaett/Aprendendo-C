//Caminhando em Arrays

#include <stdio.h>

int main(){
    //CRIAÇÃO DE UM ARRAY DE TAMANHO 10:    
    int x[10]; //X guarda o endereço do primeiro byte da posição 0 (início do array)
    //CRIAÇÃO DE UM PONTEIRO:
    int *px;
    px = &x; //px recebe o endereço que x guarda(primeiro endereço)
    //PREENCHENDO O ARRAY:
    for(int i = 0; i < 10; i++){
        x[i] = i+1;

    }
    //EXIBINDO O ARRAY:
    for(int i = 0; i < 10; i++){
        printf("Valor armazenado na posição %d do array: %d\n", i, x[i]);    
    }
    //Imprimindo o valor de px (aponta para a posição 0 do array):
    printf("Conteúdo de px: %d\n", *px);
    //Imprimindo o endereço de px:
    printf("Endereço de px: %p\n", px);

    //px =px+1; //px é incrementado em 1 (salta 4 bytes) e vai para a posição 1 do array
    //Imprimindo conteúdo de px:
    //printf("Conteúdo de px+1: %d\n", *px);
    //Imprimindo o endereço de px:
    //printf("Endereço de px: %p\n", px);

    //========================USANDO PONTEIROS=========================================

    //PREENCHENDO O ARRAY USANDO PONTEIROS:
    for(int i = 0; i < 10; i++){
       // *(px+i) = i+1; forma trabalhosa de acessar valor do ponteiro
       px[i] = i+1; //Forma facilitada de acessar valor do ponteiro
    }

    //IMPRIMINDO TODOS OS VALORES DO ARRAY USANDO PONTEIROS:
    for(int i = 0; i < 10; i++){
        printf("Valor armazenado na posição %d do array: %d\n", i, *(px+i));
        
    }


    //Forma mais interessante de caminhar do array:
    //Imprimindo conteúdo de px+1:
    printf("Conteúdo de px+1: %d\n", *(px+1));
    //Imprimindo o endereço de px+1:
    printf("Endereço de px: %p\n", px+1);
    
    return 0;

}

//======================ANOTAÇÕES========================================
//Arrays nada mais são que vetores que aramazenam conjuntos de elementos de mesmo tipo
// A primeira posição de um array é zero sempre. 
// Se estiver trabalahdno com dados tipo int, por exemplo, cada posição do array guardará 1 inteiro e terá um tamanho de 4 bytes
// *(px+i) = px[i] o uso do segundo é MUITO mais simples e comum. 

