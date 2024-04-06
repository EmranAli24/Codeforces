#include<stdio.h>
int main()
{
	int n,r,t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{
        int sum=0,value;
		scanf("%d",&n);

		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		for(int i=0;i<n;i++)
		{
			sum= sum + a[i];
		}

		r=sum%3;

		if(r==0)
		{
		
			value=0;
		}

		else if(r==2)
		{
			value=1;
		}

		else if(r==1 && (sum+1)%3==0)
		{
			value=1;
		}

		else if(r==1 && (sum+1)%3!=0)
		{
			int found=0;
			for(int j=0;j<n;j++)
			{
				if((sum-a[j])%3==0)
				{
					found=1;
					break;
				}
			}

			if(found)
				value=1;
			else 
				value=2;
		}	

		else 
		{
			value=2;
		}

		printf("%d\n",value);

	}

	return 0;
}



