#include <stdio.h>

int main()
{
    int num, reversed = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit >= 0)
        {
            reversed = reversed * 10 + digit;
        }
        else
        {
            reversed = reversed;
        }

        num = num / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
