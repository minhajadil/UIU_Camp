#include <stdio.h>

int main()
{

    int marks = 85;

    if (marks >= 90)
    {
        printf("A+ paise\n");
    }
    else if (marks >= 80)
    {
        printf("A Paise");
    }
    else if (marks >= 70)
    {
        printf("A- Paise");
    }
    else if (marks >= 60)
    {
        printf("B Paise");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}