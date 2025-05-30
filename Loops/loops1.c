/*Printf 1 to 'N' numbers*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("\n Enter the Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d",i);
	}
	return 0;
}
