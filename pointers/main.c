#include <stdio.h>

int sum(int a, int b) {
    int *ptr_1, *ptr_2;
    ptr_1 = &a;
    ptr_2 = &b;

    return *ptr_1 + *ptr_2;
}

int main() {

    //Sum
    int a = 12;
    int b = 14;

    printf("%d + %d = %d", a, b, sum(a,b));

    return 0;
}
