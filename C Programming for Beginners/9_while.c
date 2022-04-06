#include <stdio.h>

int main(void)
{
    int i = 0, m = -1;

    while ( i != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &i);
        if (i > m) m = i;
    }
    
    printf("The largest number is %d\n", m);
    
    return 0;
}