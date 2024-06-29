//PONTEIROS PARA FUNÇÕES 

#include<stdio.h>
//EXEMPLO DE USO:
//implementação de uma função de soma:
void soma(int a, int b){
    printf("a + b = %d\n", (a + b));
}

//implementação de uma função de subtração
void subtracao(int a, int b){
    printf("a - b = %d\n", (a - b));
    
}

//implementação de uma função de multiplicação
void multiplicacao(int a, int b){
    printf("a * b = %d\n", (a * b));
}

int main(){
    int a = 2;
    int b = 3;
//void é o tipo de retorno; p_array é um array que receberá os endereços das funções (int, int) são os tipos de parametros das funções
 void (*p_array[])(int, int) = {soma, subtracao, multiplicacao};
 int opcao;

printf("Dgite 0 para soma, 1 para subtração ou 2 para multiplicação \n");
scanf("%d", &opcao); //armazena o valor recebido no endereço da variável opção.
p_array[opcao](a, b); //chamada da função de com a opção digitada pelo cliente via ponteiro e passagem de parametros(1, 1)
 
 //As funções são do tipo void e irão imprimir na tela o resultado.
 
 return 0;
}

