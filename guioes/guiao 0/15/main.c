#include <stdio.h>
#define N 80


int nomeBemPorreiroEihm(char s[N]){
    int cont=0;
    for(int i=0; i<s[i]!='\0'; i++){
        if((s[i]!=' ' && s[i+1]==' ') || (s[i]!=' ' && s[i+1]=='\0')){
            cont++;
        }
    }
    return cont;
}


int main() {
    char s[N]="ola meu caro amigo";
    printf("%d", nomeBemPorreiroEihm(s));
    return 0;
}
