#include <stdio.h>



int tres_consecutivos(char *frase){

    for(int i=2; *(frase+i)!='\0'; i++){
        if(*(frase+i)==*(frase+i-1) && *(frase+i-1)==*(frase+i-2)){
            return 1;
        }
    }
    return 0;
}



int main() {
    char frase[80]="olaaaaaaolaolaola";
    printf("%d", tres_consecutivos(frase));
    return 0;
}

