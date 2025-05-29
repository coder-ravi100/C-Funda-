//check a whether in Upper case
#include<stdio.h>
int main()
{
	int ch;
	printf("\n Enter the  number for check Upper case :");
	scanf(" %d",&ch);
	if(ch >= 65 && ch <= 90) 
	{
		printf("\n %d This is a Upper Case: ",ch);
	}
	
	return 0;
}
