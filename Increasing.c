#include<stdio.h>
int main()
{

	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);

		int a[n];

		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		int temp,count=0;

		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}

		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
				count++;
		}

		if(count>0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}




	return 0;
}
