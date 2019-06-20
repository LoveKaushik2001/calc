#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   double a,b,result=0,result2=0;
   int choice;
   //clrscr();
   printf("Enter two numbers: ");
   scanf("%lf%lf", &a,&b);
   printf("Enter your choice(1-6): ");
   printf("\n1 for Addition.\n2 for Subtraction.\n3 for Multiplication.");
   printf("\n4 for Division.\n5 for eponential.\n6 for square root.\n");
   scanf("%d",&choice);

   switch(choice){
case 1: result = a+b;
	printf("\nThe sum of %lf and %lf is: %lf",a,b,result);
	break;
case 2: result = a-b;
	printf("\nThe difference of %lf and %lf is: %lf",a,b,result);
	break;
case 3: result = a*b;
	printf("\nThe product of %lf and %lf is: %lf",a,b,result);
	break;
case 4: result = a/b;
	printf("\nThe quotient of %lf and %lf is: %lf",a,b,result);
	break;
case 5: result = pow(a,b);
    printf("\nThe %lf raise to power %lf is : %lf",a,b,result);
    break;
case 6: result = sqrt(a);result2 = sqrt(b);
    printf("\Square root of %lf is : %lf and\nSquare root of %lf is : %lf",a,result,b,result2);
    break;
default:"invalid choice";
}
getch();
}
