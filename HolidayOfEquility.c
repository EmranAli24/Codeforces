#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);

	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}

	for(int i=0;i<n;i++)
	{
		count+= max-a[i]; 
	}


	

		

	printf("%d\n",count);
	return 0;
}
