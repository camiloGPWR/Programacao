#include <stdio.h>

int main() {
    float a=1, b=2, c=3, temp;

    printf("a=%f\nb=%f\nc=%f\n\n", a, b, c);

    temp=c;
    c=b;
    b=a;
    a=temp;

    printf("a=%f\nb=%f\nc=%f\n\n", a, b, c);

    return 0;
}
