#include <stdio.h>

int main() {
    int a, b, total, *p = &a, *q = &b, *r = &total;

    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    *r=*p+*q;

    printf("a= %d\nb= %d\ntotal= %d\n", a, b, total);
    return 0;
}
