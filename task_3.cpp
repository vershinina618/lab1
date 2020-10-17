#include <stdio.h>
int get_power(int number, int power)
{
    long result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= number;
    }
    return result;
}
int main()
{
    int number, power;
    printf("Input a number: ");
    scanf_s("%d", &number);
    printf("Input a power: ");
    scanf_s("%d", &power);
    printf("%d", get_power(number, power));

    return 0;
}