#include <stdio.h>

int minimum_number(int *arr, int n)
{
    int mn = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (mn > arr[i])
        {
            mn = arr[i];
        }
    }

    return mn;
}

int maximum_number(int *arr, int n)
{
    int mx = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }

    return mx;
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int minimum = minimum_number(a, n);
    int maximum = maximum_number(a, n);

    printf("%d %d\n", minimum, maximum);
}