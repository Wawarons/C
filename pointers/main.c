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

    printf("%d + %d = %d\n", a, b, sum(a,b));

    char c = 'C';
    char d = 'D';
    char *ptr_c_1 = &c;
    char *ptr_c_2 = &d;
    char tmp = *ptr_c_1;
    *ptr_c_1 = *ptr_c_2;
    *ptr_c_2 = tmp;

    printf("C = %c, D = %c\n", *ptr_c_1, *ptr_c_2);

    return 0;
}
