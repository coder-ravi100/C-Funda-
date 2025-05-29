//Check Whether Number is Positive or Negitive
#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter The Number = ");
	scanf("%d",&num);
	if(num > 0)
	{
		printf("\n Positive %d",num);
	}
	else
	{
		printf("\n Negitive %d",num);
	}
	return 0;
}
