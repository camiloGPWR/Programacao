#include <stdio.h>
#define TAM 5

void nomeFixe(int matriz[][3]) {
    int i, j, num;
    int repeated;

    for (i = 0; i < TAM; i++) {
        do {
            scanf("%d", &num);
            repeated = 0;
            for (j = 0; j < i; j++) {
                if (matriz[j][0] == num) {
                    repeated = 1;
                    break;
                }
            }
        } while (repeated);

        matriz[i][0] = num;
        matriz[i][1] = num * num;
        matriz[i][2] = num * num * num;
    }
}

int main() {
    int matriz[TAM][3];


    nomeFixe(matriz);

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
