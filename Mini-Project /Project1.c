/*(Mini Project Using Condition Statement)
Simple Calculator Using If else +,*,'/'  */
#include<stdio.h>
int main()
{
	int num1,num2;
	char operators;
	printf("\n Enter the Number [1] :");
	scanf("%d",&num1);
	printf("\n Enter the Number [2] :");
	scanf("%d",&num2);
	printf("\n Enter The Operators [+][-][*][/] :");
	scanf(" %c",&operators);
	
	if(operators == '+')
	{
		printf("\n Addition  %d",num1+num2);
	}
	else if(operators == '-')
	{
		printf("\n Subtraction %d",num1-num2);
	}
	else if(operators == '*')
	{
		printf("\n Multiplication %d",num1*num2);
	}
	else if(operators == '/')
	{
		printf("\n Division %.2f",(float)num1/(float)num2);
	}
	else
	{
		printf("\n Something Wrong");
	}
}
