/*(Mini Project Using Condition Statement)
ATM  simulator1.Check Balance 2.Withdraw Money 3.Change PIN 4.Exit)
*/
#include<stdio.h>
int main()
{
	int choice;
	int old_pin;
	int new_pin;
	int conform_pin;
	int attempts = 0;
	int balance=45000;
	int amount;
	up:
	while(attempts < 3)	
	{
		printf("\n_____________________");
		printf("\n attempts: %d, pin: %d\n", attempts,old_pin);
		printf("\n_____________________");
		printf("\nEnter The Pin:");
		scanf("%d",&old_pin);
		if(old_pin==123)
		{
			printf("\n Pin is Match Successfully");
			printf("\nDisplay Menu");
			printf("\n---------------------------");
			printf("\n 1.Check Balance");
			printf("\n---------------------------");
			printf("\n 2.Withdraw Money");
			printf("\n---------------------------");
			printf("\n 3.Change Pin");
			printf("\n---------------------------");
			printf("\n 4.Exit");
			printf("\n---------------------------");
			printf("\n Choose The Menu:");
			scanf("%d",&choice);
			switch(choice)
	{
		case 1:
				printf("\n Balance is %d",balance);
		break;
		
		case 2:
				//int amount;
				printf("\n Enter The Amount To Withdraw :");
				scanf("%d",&amount);
				if(amount <= 0)
				{
					printf("\nInvalid amount");
				}
				else if(amount > balance)
				{
					printf("\nInsufficient funds");
				}
				else if(balance -=amount)
				{
					printf("\n Withdrawal successful, new balance: %d",balance);
				}
		break;
		case 3:
				printf("\n Enter The Currect Pin..");
				scanf("%d",&old_pin);
				printf("\n Enter The New Pin..");
				scanf("%d",&new_pin);
				printf("\n Enter The Conform Pin..");
				scanf("%d",&conform_pin);
				
				if(old_pin==new_pin)
				{
					printf("\n correct new pin PIN");
				}
				else if(old_pin != new_pin )
				{
					printf("\n Incorrect new pin PIN");	
				}
				
				
		break;
		case 4:
			
		break;
		case 5:
			
		break;
			
		break;
	}
			break;
		}
		else
		{
			attempts++;
			printf("\n Pin is not match");
			printf("Wrong PIN, attempts left: %d", 3 - attempts);
		}
	}
	if(attempts >= 3)
			{
				printf("\n Too many attempts, ATM locked");
			}
	goto up;
	return 0;
}
