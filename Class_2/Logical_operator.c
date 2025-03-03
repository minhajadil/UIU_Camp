#include <stdio.h>

int main()
{

    int N = 100;

    if (N % 3 == 0 || N % 5 == 0)
    {
        printf("Divisible by 5 or 3");
    }
    else
    {
        printf("Not divisible");
    }

    return 0;
}