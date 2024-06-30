//Desafio: algoritmo matriz 3d eficiete
#include <stdio.h>
#include<stdlib.h>

int main()
{
int ***x; 
int nl = 3, nc = 3, np = 3;
x = malloc(np*sizeof(int**));
x[0] = malloc(np*nl*sizeof(int*));      
x[0][0] = malloc(np*nl*nc*sizeof(int));
for(int i = 1; i < np; i++){
    x[i] = x[i-1]+nl; 
}

for(int i = 1; i < np*nl; i++){
    x[0][i] = x[0][i-1]+nc;
    
}

//PREENCHENDO A MATRIZ:

for(int i = 0; i < np; i++){
    for(int j = 0; j < nl; j++){
        for(int k = 0; k < nc; k++){
            x[i][j][k] = 0;
        }
    }
}

for(int i = 0; i < np; i++){
    for(int j = 0; j < nl; j++){
        for(int k = 0; k < nc; k++){
          printf("%d ", x[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
free(x[0][0]);
free(x[0]);
free(x);

return 0;

}
