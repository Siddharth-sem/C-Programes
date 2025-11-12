#include <stdio.h>

int main()
{
    int num, original_num, remainder, digits = 0, i;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        digits++;
        num /= 10;
    }

    num = original_num;

    while (num != 0)
    {
        remainder = num % 10;

        int power = 1;
        for (i = 0; i < digits; i++)
        {
            power *= remainder;
        }

        sum += power;
        num /= 10;
    }

    if (sum == original_num)
    {
        printf("%d is an Armstrong number.\n", original_num);
    }
    else
    {
        printf("%d is NOT an Armstrong number.\n", original_num);
    }

    return 0;
}
