#include <stdio.h>

int main()
{
    int i;
    for (i = 10; i >= 1; i--)
    {
        if (i >= 1)
        {
            printf("%d ", i);
        }
        else
        {
            printf("Number out of range ");
        }
    }
    printf("\n");
    return 0;
}
