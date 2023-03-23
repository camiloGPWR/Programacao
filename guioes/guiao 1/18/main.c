#include <stdio.h>

void funcao(int lin, int col, float m[lin][col], int *min, int *max){
    float soma[col];
    float aux=0;
    int pos_max=0, pos_min=0;
    for(int i=0; i<col; i++){
        for(int j=0; j<lin; j++){
            aux += m[i][j];
        }
        aux = aux/lin;
        soma[i] = aux;
        printf("media da coluna %d = %.2f\n", i, aux);
    }

    for(int i=0; i<col; i++){
        if(soma[i] > *max){
            *max = soma[i];
            pos_max = i;
        }
        if(soma[i] < *min) {
            *min = i;
            pos_min = i;
        }
    }

    *max = pos_max+1;
    *min = pos_min+1;
}

int main(int argc, char** argv) {
    float m1[3][2] = {{1.0, 4.5},{-2.5, 8.9},{0.3, 1.4}};
    float m2[2][6] = {{1.0, 1.6, 4.2, 1.4, 0.5, -3.4},{2.5, 8.1, 0.9, -0.1, 0.8, 3.5}};
    int min1=0, max1=0, min2=0, max2=0;

    // Chamar a função para a matriz m1: Preencher os indices min1 e max1
    funcao(3,2,m1,&min1,&max1);
    printf("\n");
    // Chamar a função para a matriz m2: Preencher os indices min2 e max2
    funcao(2,6,m2,&min2,&max2);

    printf("Matriz m1: (%d, %d)\n", min1, max1);
    printf("Matriz m2: (%d, %d)\n", min2, max2);
    return 0;
}
