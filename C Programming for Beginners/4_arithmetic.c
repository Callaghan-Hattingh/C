#include <stdio.h>

int main(void)
{
    double x = 5.24, y = -1.78;
    int a = 11, b = 3;

    double mult = x * y;
    double div = x / y;
    double add = x + y;
    double sub = x - y;
    int mod = a % b;
    int intdiv = a / b;
    

    printf("mult: %f\n", mult);
    printf("div: %f\n", div);
    printf("add: %f\n", add);
    printf("sub: %f\n", sub);
    printf("mod: %d\n", mod);
    printf("intdiv: %d\n", intdiv);

    return 0;
}