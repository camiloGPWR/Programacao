#include <stdio.h>
#define N 5
int seracapicua(int t[N]){
    for (int i=0, j=N-1; i<N; i++, j--)
        if(t[i]!=t[j])
            return 0;


    return 1;
}

int main() {
    int t[N];
    for(int i=0; i<N; i++){
        printf("t[%d]:", i);
        scanf("%d", &t[i]);
    }
    if(seracapicua(t)==1){
        printf("E capicua");
    }else{
        printf("Nao e capicua");
    }

    return 0;
}
