/*Printf 'N' to 1 numbers*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("\n Enter the number :");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		printf(" %d",j);
	}
	printf("\n\n");
	for(i=n;i>=1;i--)//jab tak i >= 0 ke bara  bar nahi hota tab tak loop chalega
	{
		printf(" %d",i);//10,9,8,7,6,5,4,3,2,1
	}
	
	return 0;
}
