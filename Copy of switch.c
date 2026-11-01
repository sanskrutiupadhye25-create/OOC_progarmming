#include <stdio.h>
int main()
{
int a, b, choice;
printf("Enter two numbers: ");
scanf("%d %d",&a ,&b);
printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. multiplication");
printf("\n4. Division");
printf("\nEnter your choice(1-4): ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Addition = %d", a+b);
break;
case 2:
printf("Substraction = %d", a-b);
break;
case 3:
printf("Multiplication = %d", a*b);
break;
case 4:
printf("Division = %d", a/b);
break;
default:
printf("Invalid choice!");
}
return 0;
}
