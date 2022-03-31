#include <stdio.h>

int main(void)
{
    float x = 0;
    double y = 0;
    // char are int by default and not a string
    char c = 'a';

    // printf("x:");
    // scanf("%f", &x);    
    // printf("x: %f\n", x);

    // printf("y:");
    // scanf("%lf", &y);
    // printf("y: %lf\n", y);

    printf("c: ");
    scanf("%c", &c);
    printf("c: %c\n", c);
    printf("c: %d\n", c);

    return 0;
}