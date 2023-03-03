#include <stdio.h>
#include <string.h>
#define N 80
int enter(char str[N]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i+1]!=' '){
            str[i]='\n';
        }
    }
    puts(str);
    return 0;
}

int main() {
    char str[N]="Hoje e domingo";
    enter(str);
    return 0;
}
