#include<stdio.h>
void main()
{
int a;
printf("Enter the value: ");
scanf("%d", &a);
if(a<0)
printf("The input is Negative.");
else if(a>0)
printf("The input is Positive.");
else
printf("The input is Zero.");
getch();
clrscr();
}
