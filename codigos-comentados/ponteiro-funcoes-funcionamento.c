//PONTEIROS PARA FUNÇÕES 

//CRIANDO UMA FUNÇÃO DE DEMONSTRAÇÃO:
int funcao(int a){ //função com um parametro de entrada a
    return  a+1; //retorna o valor de a acrescido de 1
}

int main(){
    int (*pf)(int) = &funcao; //DECLARANDO FUNÇÃO: primeiro int: tipo de retorno pf é o nome da variável ponteiro e o segundo int é o topi de parametro  que a função recebe. Esse ponteiro pf está recebendo o endereço da função (esse & pode ser removido) 
    printf("valor %d\n", pf(1)); //passando 1 para o parametro a da função via ponteiro
    return 0;
}

//ANOTAÇÕES:
//Onde uma determonada função fica na memória virtual?
// pode-se responder essa pergunta com um ponteiro que guadará o endereço dessa função
//Não utilizado com muita frequencia 