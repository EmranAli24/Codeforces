#include<stdio.h>
#include<math.h>

int main()
{

	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

		int n;
		scanf("%d",&n);

		int q,r;
		q = n/3;
		r = n%3;

		if(r==1)
		{
			printf("%d %d\n",q+1,q);
		}

		else if(r==2)
		{
			printf("%d %d\n",q,q+1);
		}

		else
			printf("%d %d\n",q,q);
	}

	return 0;
}




