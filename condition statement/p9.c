/*Using Ladder Find grade based on marks 
90 + = A, 80 + = B, 70 + = c, 60 + = d Else Fail.. 
*this program iis error i am not fixed this */
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the Marks for Student Max[90]:");
	scanf("%d",&marks);
	if(marks >= 90)
	{
		printf("\n A Grade");
	}
	else if(marks <= 80)
	{
		printf("\n B Grade");
	}
	else if(marks <= 70)
	{
		printf("\n C Grade");
	}
	else if(marks <= 60)
	{
		printf("\n D Grade");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}
