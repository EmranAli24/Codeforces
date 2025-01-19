#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	printf("I hate");

	for(int i=2;i<=n;i++)
	{
	//	printf("I hate");
	
	if(i%2==0)
	{
		printf(" that I love");
	}
	
	if(i%2!=0) 
	{
		printf(" that I hate");
	}

	}


	printf(" it\n");

	return 0;
}
