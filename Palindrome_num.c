/* palindrome number*/

#include <stdio.h>

int main()
{
	int num, original, rev_num=0, digit;
	
	printf(" enter the number= ");
	scanf("%d", &num);
	original = num;
	
	while(num>0)
	{
		digit = num % 10;
		num = num/10;
		rev_num = rev_num * 10 + digit; 
//		printf("%d %d", digit, rev_num);
	}

	if (original == rev_num)
	printf(" %d is a palindrome number", original);
	
	else
	printf(" %d is not a palindrome number", original);
	
	return 0;
}
