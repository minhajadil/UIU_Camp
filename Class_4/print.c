#include <stdio.h>

void printer(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main()
{

    int n;
    scanf("%d", &n);

    printer(n);
}