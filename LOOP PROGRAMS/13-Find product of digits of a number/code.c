#include <stdio.h>

int main()
{
    int num, product = 1, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        product = 0;
    }
    else
    {
        while (num > 0)
        {
            digit = num % 10;
            product = product * digit;
            num = num / 10;
        }
    }

    printf("Product of the digits is: %d\n", product);

    return 0;
}
