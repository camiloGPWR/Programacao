#include <stdio.h>

void f(int *t, int tam, int *np, int *ni, int *maior, int *pos){
    *maior=*t;
    *pos=0;
    int nImp=0, nPar=0;
    for(int i=0; i<tam; i++){
        if(*(t+i)>*maior){
            *maior=*(t+i);
            *pos=i;
        }
        if(*(t+i)%2==0){
            nPar++;
        }else{
            nImp++;
        }
    }
    *np=nPar;
    *ni=nImp;
}


int main() {
    int tam=10, t[tam], nImpares, nPares, maior, pos;

    for(int i=0; i<tam; i++){
        printf("t[%d]:", i);
        scanf("%d", &t[i]); //usar o exemplo do exercicio (1 3 7 5 2 10 9 7 7 1)
    }

    f(t, tam, &nPares, &nImpares, &maior, &pos);

    printf("Existem %d numeros pares, %d numeros impares. O maior numero e o %d e esta na posicao %d", nPares, nImpares, maior, pos);













    return 0;
}
