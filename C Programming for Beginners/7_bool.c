#include <stdio.h>

int main(void)
{
    int h = 0, w = 0;

    printf("Enter Height: ");
    scanf("%d", &h);

    printf("Enter Weight: ");
    scanf("%d", &w);

    if ( !(w < h))
    {
        printf("You are big!\n");
    }
    else if (h > 90 && w > 30)
    {
        printf("You are a Super Hero!\n");
    }
    else if (h > 90 || w > 30)
    {
        printf("You are a Hero!\n");
    }
    else
    {
        printf("You are not a Super Hero!\n");
    }
    
    return 0;
}