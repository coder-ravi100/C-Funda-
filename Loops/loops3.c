/*Print Even numbers form 1 to 'N'
Even-0,2,4,6...100
Odd-1,3,5,7...101*/
#include<stdio.h>
int main()
{
	int  num,i;
	printf("\n Enter the number =");//10
	scanf("%d",&num); 
	for(i=0;i<=num;i++)//note jo value change hoti hai vahi leni hai jaise i%2==0
	{
		if(i%2==0)	
		{
			printf(" %d",i);//0,2,4,6,8,10	
		}	
	}	
	return 0;
}

