#include <stdio.h>

int sum(int a, int b)
{
return a + b;
}

int main()
{
	int num1, num2;
	printf("Enter the first number\n");
	scanf("%d", &num1);
	printf("Enter the second number\n");
	scanf("%d", &num2);
	printf("The sum is %d \n", sum(num1, num2));

return 0;
}


