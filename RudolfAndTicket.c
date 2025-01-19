#include<stdio.h>
int main()
{

	int t,count=0;
	scanf("%d",&t);
for(int i=0;i<t;i++)
{

	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);

	int a1[n],a2[m];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}

	for(int i=0;i<m;i++)
	{
		scanf("%d",&a2[i]);
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a1[i]+a2[j]<=k)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
	count=0;
}
return 0;
}
