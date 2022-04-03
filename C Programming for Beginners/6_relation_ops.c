#include <stdio.h>

int main(void)
{
    int h = 0;

    printf("Enter Height: ");
    scanf("%d", &h);

    if (h < 90)
    {
        printf("short\n");
    }
    else if (h == 90)
    {
        printf("average\n");
    }
    else {
        printf("tall\n");
    }

    if (h != 90)
    {
        printf("not average\n");
    }

    return 0;
}