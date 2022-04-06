#include <stdio.h>

int main(void)
{
    int i = 0, q= 0, t = 0, n = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &q);
        t += q;
        i++;
    }

    printf("The sum of the numbers is %d\n", t);
    printf("The average of the numbers is %.2f\n", (float)t / n);
    
    return 0;
}