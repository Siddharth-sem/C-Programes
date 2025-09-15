#include<stdio.h>
void main()
{
 int a, b, c, r;
 printf("Enter the 1st value: ");
 scanf("%d", &a);
 printf("Enter the 2nd value: ");
 scanf("%d", &b);

 printf("Choose(Enter 1,2,3 or 4) : \n"
	"1.Add\n"
	"2.Subtract\n"
	"3.Multiply\n"
	"4.Divide\n");
 scanf("%d", &c);
   switch(c)
   {
    case 1 : r = a+b;
    printf("%d + %d = %d", a, b, r);
      break;

    case 2 : r = a-b;
    printf("%d - %d = %d", a, b, r);
      break;

    case 3 : r = a*b;
    printf("%d x %d = %d", a, b, r);
      break;

    case 4 : r = a/b;
    printf("%d / %d = %d", a, b, r);
      break;

    default: printf("Some Error Occured");
   }
 getch();
 clrscr();
}
