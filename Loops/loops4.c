/*Print odd numbers form 1 to 'N'
Even-0,2,4,6...100
Odd-1,3,5,7...101*/
#include<stdio.h>
int main()
{
	int num,i;
	printf("\n Enter the value =");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			printf(" %d",i);
		}
	}
	
	return 0;
}

