//Check Whether number Divide by 5 or not
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number = ");
	scanf("%d",&num);
	if(num % 5 == 0)
	{
		printf("\n %d Divisible by 5 =",num);
	}
	else
	{
		printf("\n %d Not Divisible 5 =",num);
	}
	return 0;
}
