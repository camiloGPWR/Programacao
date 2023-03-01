#include <stdio.h>
#include <string.h>
#define N 80


int vira(char str[N]){

    int lenght =strlen(str);
    char temp[lenght];

    for(int i=0, j=lenght-1; str[i]!='\0'; i++, j--){
        temp[j]=str[i];
    }

    puts(temp);



    return 0;
}


int main() {
    char str[N]="Hoje e domingo!";

    puts(str);
    vira(str);
    return 0;
}
