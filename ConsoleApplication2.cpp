#include <stdio.h>

int is_simple(int number)
{
    if (number <= 2)
    {
        return 1;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int number;
    scanf_s("%d", &number);
    printf("%d", is_simple(number));

    return 0;
}