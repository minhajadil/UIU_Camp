#include <stdio.h>

int addition_machine(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    // 1st task , n dibo , 1 theke n sum * 3
    // 2nd task , n dibo , 1 theke n sum * 4
    // 3rd task , n dibo , 1 the n sum * 100

    int n;
    scanf("%d", &n);

    int x = addition_machine(n);

    printf("%d\n", x * 3);

    int n1;
    scanf("%d", &n1);

    x = addition_machine(n1);
    printf("%d\n", x * 4);

    int n2;
    scanf("%d", &n2);

    x = addition_machine(n2);
    printf("%d\n", x * 100);
}