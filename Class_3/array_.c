#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int age[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }

    age[3] = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", age[i]);
    }
}