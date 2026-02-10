#include <stdio.h>

int main() {
    int a = 12;
    int b = 14;
    int *p = &a;
    int *q = &b;
    int r = *p + *q;

    printf("%d + %d = %d", a, b, r);
    return 0;
}
