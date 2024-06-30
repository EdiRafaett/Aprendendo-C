//PONTEIROS PARA FUNÇÕES COMO ARGUEMENTO PARA OUTRA FUNÇÃO:

#include<stdio.h>

int funcao(int a){
    return a+1; //incrementa em 1 o valor de a
}

int alo(int (*f)(int)){ // esse ponteiro irá apontar função funcao que foi passada como parametro na chamada dentro da main
    printf("ret =  %d\n", f(3)); //chamada da função funcao pelo ponteiro f que aponta para ela passando o 3 como parametro.
}

int main(){
    alo(funcao); //chamado funcao alo e passando a função funcao como parametro.
}

