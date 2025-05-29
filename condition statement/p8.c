//chech whether year is leap year or not
#include<stdio.h> 
int main()
{
	int year; 
	printf("enter the year =");
	scanf("%d",&year);
	if((year % 4 == 0 || year % 400 == 0) && (year % 100 != 0))
	{
		printf("%d Is Leap Year",year);
	}
	else
	{
		printf("%d Is Not Leap Year",year); 
	}
	return 0;
}
