#include <stdio.h>
#include <stdlib.h>

int main()
{

   char Calculate;
   float a, b, result = 0;
   printf("Enter the operation to be performed (+, -, *, /)\n");
   scanf("%c", &Calculate);
   printf("\n Enter the numbers: a and b");
   scanf("%f%f", &a, &b);

   switch(Calculate)
  {
  case '+':
  result = a + b;
  break;
  case '-':
  result = a - b;
  break;
  case '*':
  result = a * b;
  break;
  case '/':
  result = a/ b;
  break;
	default:
	printf("\n You have enetered an Invalid Operator ");
	}

	printf("\n The result of %.2f %c %.2f  = %.2f", a,Calculate,b,result);

return 0;
}
