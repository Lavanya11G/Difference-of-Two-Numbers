// a function that will return a specific term in the Fibonacci series.

#include <stdio.h>

int fibona(int n);
int main()
{
	int n;
	printf("nth term: ");
	scanf("%d", &n);
	
	printf("%d", fibona(n));
	
	return 0;
}
int fibona(int n)
{
	int term1 = 0,term2 = 1,sum;
	
	printf("%d  %d", term1,term2);
	
	for(int k=2; k<= n; k++)
	{
		sum= term1+ term2;
		printf(" %d ", sum);
		
		term1=term2;
		term2=sum;	
	}
	
	printf("\n%d is the %d term ",sum,n);
	return 0;

}
