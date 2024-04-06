#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{
		int a,b,n,count=0;
		scanf("%d %d %d",&a,&b,&n);

		for(int i=0;;i++)
		{
			if(a>b)
			{
				b+=a;
				count++;
				if(b>n)
					break;
			}

			else
			{
				a+=b;
				count++;
				if(a>n)
					break;
			}

		}
	


	printf("%d\n",count);
	}

	return 0;
}
