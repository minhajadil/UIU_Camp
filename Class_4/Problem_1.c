#include <stdio.h>

void print_from_1_to_N(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    print_from_1_to_N(n);
}