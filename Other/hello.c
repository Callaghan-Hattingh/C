#include <stdio.h>

int hello(void)
{
    printf("Hello, World!\n");
}

int main(void)
{
    char name;
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Hello,\n %s", &name);
}
