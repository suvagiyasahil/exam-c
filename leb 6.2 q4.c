#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, a, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) 
    {
        if (i <= 1)
            a = i;
        else
        {
            a = first + second;
            first = second;
            second = a;
        }
        printf("%d ", a);
    }

    return 0;
}