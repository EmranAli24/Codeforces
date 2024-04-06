#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

	int n,temp;
	scanf("%d",&n);

	int a[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int j=0;j<n-1;j++)
	{
		for(int k=0;k<n-1-j;k++)
		{
			if(a[k] > a[k+1])
			{
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
int product = a[0]+1 ;

for(int i=1;i<n;i++)
{
	product *= a[i];

}

printf("%d\n",product);

	}

return 0;
}


