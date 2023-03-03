#include <stdio.h>

void procura_dupla(int *tab, int tam, int *prim, int *seg){
    *prim=*(tab+0); //tab+0 == tab
    *seg=0; //para procurar erros
    for(int i=0; i<tam; i++){
        if(*(tab+i)>*prim){
            *seg=*prim;
            *prim=*(tab+i);
        }
    }
}

int main() {
    int tam=5, t[tam], primeiro, segundo;
    for(int i=0; i<tam; i++){
        printf("t[%d]:", i);
        scanf("%d", &t[i]);
    }
    procura_dupla(t, tam, &primeiro, &segundo);
    printf("Primeiro=%d\nSegundo=%d", primeiro, segundo);
    return 0;
}
