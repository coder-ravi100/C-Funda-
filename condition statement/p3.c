//check whether is in age>=18 
#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter the Number:");
	scanf("%d",&num);
	if(num >= 18)
	{
		printf("\n %d Eligible for Votting..",num);	
	}
	else
	{
		printf("\n Invalid number....");
	}
	return 0;
}
