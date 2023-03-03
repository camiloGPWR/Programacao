#include <stdio.h>


int whatever(int n, int t[n]){
    float media=0;
    for(int i=0; i<n; i++){
        media+=t[i];
    }
    media/=n;
    printf("\nmedia:%.2f\n", media);
    for(int i=0; i<n; i++){
        if(t[i]<media){
            t[i]=0;
        }
    }

    return 0;
}


int main() {

    int n=5, t[n];

    for(int i=0; i<n; i++){
        printf("t[%d]:", i);
        scanf("%d", &t[i]);
    }

    whatever(n ,t);

    for(int i=0; i<n; i++)
        printf("%d", t[i]);

    return 0;
}
