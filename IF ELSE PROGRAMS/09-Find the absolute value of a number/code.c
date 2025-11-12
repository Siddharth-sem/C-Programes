#include <stdio.h>

int main() 
{
    int num, absoluteValue;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num < 0) 
    {
        absoluteValue = -num;  
    } 
    else 
    {
        absoluteValue = num;   
    }

    printf("Absolute value: %d\n", absoluteValue);

    return 0;
}
