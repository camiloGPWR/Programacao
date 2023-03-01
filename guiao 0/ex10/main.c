#include <stdio.h>
#define N 3

int cuboMagico(int m[][N]){
    int soma=0;
    int somaAtual=0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==0){
               soma += m[i][j];
            }
            somaAtual += m[i][j];
        }
        if(somaAtual!=soma)
            return 0;

        somaAtual=0;
    }

    //falta fazer para coluna e diagonal mas é praticamente a mesma coisa

    return 1;
}


int main() {
    int m[N][N]={{6,1,8}, {7,5,3}, {2,9,4}};
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", m[i][j]);
        }
        putchar('\n');
    }

    printf("\n\n%d", cuboMagico(m));
    return 0;
}
