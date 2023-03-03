#include <stdio.h>


int comuns(int *tabA, int tamA, int *tabB, int tamB){
    int common=0;

    for(int i=0; i<tamA; i++){
        for(int j=0; j<tamB; j++){
            if(*(tabA+i)==*(tabB+j)){
                common++;
            }
        }
    }
    return common;
}


int main() {

    int tamA=5, tamB=7, tA[tamA], tB[tamB];

    for(int i=0; i<tamA; i++){
        printf("tA[%d]:", i);
        scanf("%d", &tA[i]);
    }
    putchar('\n');
    for(int i=0; i<tamB; i++){
        printf("tB[%d]:", i);
        scanf("%d", &tB[i]);
    }



    printf("Numero de elementos em comum:%d", comuns(tA, tamA, tB, tamB));
    return 0;
}
