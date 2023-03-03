#include <stdio.h>

int maior_subida(int *tab, int dim){
    int maiorSubidaPos, subidaInst, maiorSubida=*(tab+1)-*(tab+0);
    for(int i=1; i<dim; i++){//comeca no 1 porque o 0 é o primeiro, logo nunca aumentou
        subidaInst=*(tab+i)-*(tab+(i-1));
        if(subidaInst>maiorSubida){
            maiorSubida=subidaInst;
            maiorSubidaPos=i;
        }
    }
    return maiorSubidaPos;
}


int main() {
    int tam=5, t[tam];
    for(int i=0; i<tam; i++){
        do{
            printf("t[%d]=", i);
            scanf("%d", &t[i]);
            if(t[i]<=t[i-1] && i!=0)
                printf("Tem que ser mais alto :/ \n");
        }while(t[i]<=t[i-1] && i!=0);
    }
    printf("\nMaior subida:%d", maior_subida(t, tam));
    return 0;
}
