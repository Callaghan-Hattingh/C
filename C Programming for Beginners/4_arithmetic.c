#include <stdio.h>

int main(void)
{
    double x = 5.24, y = -1.78;

    double mult = x * y;
    double div = x / y;
    double add = x + y;
    double sub = x - y;

    printf("mult: %f\n", mult);
    printf("div: %f\n", div);
    printf("add: %f\n", add);
    printf("sub: %f\n", sub);

    return 0;
}