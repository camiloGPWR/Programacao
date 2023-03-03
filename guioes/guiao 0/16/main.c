#include <stdio.h>
#define N 80

int funcaoEspacoesFixe(char s[N]){
    for(int i=1; s[i]!='\0'; i++){
        if(s[i]==' ' && s[i-1]==' '){
            for(int j=i; s[i]!=' '; j++){
                s[j]=s[j+1];
            }
        }
    }

    puts(s);
    return 0;
}


int main() {
    char s[N]="ola       meu   caro";
    funcaoEspacoesFixe(s);
    return 0;
}
