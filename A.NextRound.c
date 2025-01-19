#include<stdio.h>
int main()
{
	int n,k;

	//printf("Enter the value of n & k : ");
	scanf("%d %d",&n,&k);

	int a[n];
	int count=0;

	for(int i=0;i<n;i++)
	{
		//printf("Enter the value of a[%d]: ", i);
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++)	
	{
		//if(a[k-1]==0)
		/*{
			count=0;
		}
		else*/ 

		if(a[i]>=a[k-1] && a[i]>0)
		{
			count++;
		}
	}



	printf("%d\n",count);

	return 0;
}
