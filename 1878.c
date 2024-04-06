//How much does daytone cost?

#include<stdio.h>
int main()
{
	int n,k,t,count=0;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

	
	scanf("%d %d",&n,&k);

	int a[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int j=0;j<n;j++)
	{
		if(a[j]==k)
		{
			count++;
		}
	}

	if(count>0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	count=0;

}
return 0;
}
