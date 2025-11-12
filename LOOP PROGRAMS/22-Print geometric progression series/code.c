#include <stdio.h>

int main()
{
    int firstTerm, totalTerms, commonRatio;
    int i;
    int currentTerm;

    printf("Enter the first term of the GP series: ");
    scanf("%d", &firstTerm);

    printf("Enter the total number of terms: ");
    scanf("%d", &totalTerms);

    printf("Enter the common ratio: ");
    scanf("%d", &commonRatio);

    currentTerm = firstTerm;

    printf("Geometric Progression Series: ");

    for (i = 1; i <= totalTerms; i++)
    {
        printf("%d ", currentTerm);

        if (i < totalTerms)
        {
            currentTerm = currentTerm * commonRatio;
        }
        else
        {
            currentTerm = currentTerm;
        }
    }

    printf("\n");
    return 0;
}
