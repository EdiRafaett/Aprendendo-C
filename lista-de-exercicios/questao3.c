/*QUESTÃO 3*/

#include <stdio.h>

int main(){
    int i, j;
    int *p, *q;
    p = &i; // Válido: O ponteiro p aponta para o endereço de i
    //*q = &j; // Inválido: o * é usado para acessar o valor guardado no endereço para o qual o ponteiro aponta, mas q não foi inicializado
    p = &*&i;//Válido: O ponteiro p = o endereço de i >>>  &i é o endereço de i, *&i agora é o valor guardado em i, &*&i é o endereço de i... É como se o seguinte não levasse em consideração o valor do anterior. 
    //i = (*&)j; //Inválido: * é usado para acessar o valor guardado no endereço para o qual o ponteiro aponta, mas &j é o endereço de j, não um ponteiro
    i = *&j; // Válido: i = o valor de j >>> &j é o endereço de j, *&j é o valor guardado em j
    i = *&*&j; // Válido i = o valor de j >>> &j é o endereço de j, *&j é o valor guardado em j, *&*&j é o valor guardado em j
    q = *p; // Inválido: q é um ponteiro, ou seja, não pode receber um valor, mas sim um endereço
    i = (*p)++ + *q; // Válido: i = o valor para o qual p aponta iuncrementado de 1 + o conteúdo para o qual p aponta.
    return 0;

}