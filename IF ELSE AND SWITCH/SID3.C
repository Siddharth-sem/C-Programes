#include<stdio.h>
void main()
{
 int a, b;
 printf("Enter 1st number: ");
 scanf("%d", &a);

 printf("Enter 2nd number: ");
 scanf("%d", &b);

 if(a>b)
 printf("%d is Larger.",a);
 else if(a<b)
 printf("%d is Larger.",b);
 else
 printf("Both are equal values.");
getch();
clrscr();
}
