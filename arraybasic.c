#include <stdio.h>

int main()
{
	int n, arr[n];
	printf("Enter the size of array \n");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("Enter the value at %d position \n", i);
		scanf("%d", &arr[i]);
	}

	printf("Your array is \n");
	

	for(int i = 0; i < n; i++)
	{
		printf("%d \n", arr[i]);
		
	}
	printf("\n");

return 0;
}


