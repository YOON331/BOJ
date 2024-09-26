#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int sum = a*a + b*b+ c*c+ d*d+ e*e;
    printf("%d", sum%10);
}
 