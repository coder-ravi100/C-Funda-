/*print table of a number[e.g 5 X 1 = 5]*/
#include<stdio.h>
int main()
{
	/*10 X 1 = 10  format */
	
	int num, i;
	printf("\n Enter the number = ");
	scanf("%d",&num);//10
	for(i=1;i<=num;i++)
	{
		printf("\n %d  X  %d  = %d",num,i,num*i);
		/*
		i=1 <=10 1+0=1
		i=2 <=10 1+1=2
		i=3 <=10 1+1+1=3
		i=4 <=10 1+1+1+1=4
		i=5 <=10 1+1+1+1+1=5
		i=6 <=10 1+1+1+1+1+1=6
		i=7 <=10 1+1+1+1+1+1+1=7
		i=8 <=10 1+1+1+1+1+1+1+1=8
		i=9 <=10 1+1+1+1+1+1+1+1+1=9
		i=10 <=10 1+1+1+1+1+1+1+1+1+1=10
		i=11 <=10 !
		
		*/
	}
}
