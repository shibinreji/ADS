#include <stdio.h>

int main()
{
	int n, i, arr[n], sum = 0 ;
	printf("Enter the size of array \n");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Enter the value at %d position \n", i);
		scanf("%d", &arr[i]);
	}

	printf("Your sum of array is \n");
	

	for(i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		
	}
	printf("%d \n", sum);


return 0;
}


