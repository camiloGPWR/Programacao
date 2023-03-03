#include <stdio.h>
#define N 3

//praticamente a mesma coisa

int nomeSuperOriginalParaUmaFuncaoDoExercicioNoveDoGuiaoZeroYey(int m[][3]){

    for(int i=0; i<N ; i++){
        for(int j=0; j<3; j++){
            printf("%d ", m[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

int main() {
    int m[3][N]={{1,2,3}, {4,5,6}, {7,8,9}};
    nomeSuperOriginalParaUmaFuncaoDoExercicioNoveDoGuiaoZeroYey(m);
    return 0;
}