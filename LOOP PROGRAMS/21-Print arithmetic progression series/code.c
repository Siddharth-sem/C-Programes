#include <stdio.h>

int main()
{
    int firstTerm, numberOfTerms, commonDifference;
    int count = 1;
    int currentTerm;

    printf("Enter the first term of the A.P. series: ");
    scanf("%d", &firstTerm);

    printf("Enter the number of terms to be printed: ");
    scanf("%d", &numberOfTerms);

    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);

    currentTerm = firstTerm;

    while (count <= numberOfTerms)
    {
        printf("%d", currentTerm);

        if (count < numberOfTerms)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }

        currentTerm = currentTerm + commonDifference;
        count++;
    }

    return 0;
}
