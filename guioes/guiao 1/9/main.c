#include <stdio.h>
#include <ctype.h>

void verifica(char *tel, char *c){
    int cont=0;
    *c='V';
    for(int i=0; *(tel+i)!='\0'; i++){
        if(*(tel+0)!='2'){
            *c='I';
        }
        if(isdigit(*(tel+i))==0){
            *c='I';
        }
        cont++;
    }
    if(cont!=9){
        *c='I';
    }



}

int main() {
    char str[80]="239800300";
    char c;

    verifica(str, &c);
    printf("%c", c);
    return 0;
}
