#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);

	int people[n],capacity[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&people[i],&capacity[i]);
	}

	for(int i=0;i<n;i++)
	{
		if((capacity[i]-people[i])>=2)
		{
			count++;
		}
	}

	printf("%d\n",count);
	
	return 0;
}
