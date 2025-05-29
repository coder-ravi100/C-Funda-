//Find Greatest  Amoung Three Number
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("\n Enter the num1 :");//4
	scanf("%d",&num1);
	printf("\n Enter the num2 :");//2
	scanf("%d",&num2);
	printf("\n Enter the num3 :");//1
	scanf("%d",&num3);
	
	if(num1 > num2)//4>2
	{
		if(num1 > num3)//4>1
		{
			printf("\nGreatest Number is %d",num1);//4
		}
		else
		{
			printf("\nGreatest Number is %d",num3);
		}
	}
	if(num2 > num3)//2>1
	{
			printf("\nGreatest Number is %d",num2);//2
	}
	else
	{
			printf("\nGreatest Number is %d",num3);
	}
	return 0;
}
