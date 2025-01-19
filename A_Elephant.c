#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);

	int quotient = x/5;
	int  remainder = x%5;

	if(remainder>=1 && remainder<=4)
	{
		printf("%d\n",quotient+1);
	}
	
	else 
		printf("%d\n",quotient);

	return 0;
}
