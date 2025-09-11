#include<stdio.h>
void main()
{
 int a;
 printf("Input the Value.");
 scanf("%d", &a);
 if (a%2==0)
 printf("It's a Even Value.");
 else if (a%2!=0)
 printf("It's a Odd Value.");
 else
 printf("Some error occured.(Please Input a integer Value)");
 getch();
 clrscr();
}