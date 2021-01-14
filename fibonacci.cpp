#include <stdio.h>
#include <stdlib.h>

long fibonacci(long n);

int main(void)
{
	long result;
	long number;
	int i;
	
	printf("Enter yout number: ");
	scanf("%d", &number);
	
	result = fibonacci(number);
	
	
	printf("Fibonacci(%1d) = %1d\n", number, result);

	return 0;
}

long fibonacci(long n)
{
	if(n ==0 || n ==1)
	{
		return n;
	}
	else{
		return fibonacci(n - 1 ) + fibonacci(n - 2);
	}
}
