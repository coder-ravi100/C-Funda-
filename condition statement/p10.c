//check whether character is vowel aur consonant
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter The character is Vowel Or Consonant :");
	scanf(" %c",&ch);
	if(ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
	ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("\n %c Vowel..",ch);
	}
	else
	{
		printf("\n %c Consonant..",ch);
	}
	return 0;
}
