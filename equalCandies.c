#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

		int n,temp,result=0;
		scanf("%d",&n);

		int a[n];

		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}

		for( int i=1;i<n;i++)
		{
			result+= ( a[i]-a[0]);
		}

		printf("%d\n",result);

	}


	return 0;
}
