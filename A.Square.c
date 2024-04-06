#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t,r1,r2,r;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		int x[4],y[4];

		for(int i=0;i<4;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
		}
	 
		/*if(x[0]==x[2])
		{
			r1=abs(x[0]-x[1]);
		}
		else if(x[0]==x[1])
		{
			r1=abs(x[0]-a[2]);
		}
		
		if(y[0]==[2])
		{
			r2=abs(y[0]-y[1]);
		}*/

		r1=(x[0]==x[1])?abs(x[0]-x[2]):abs(x[0]-x[1]);
		r2=(y[0]==y[1])?abs(y[0]-y[2]):abs(y[0]-y[1]);
	
		r = r1*r2;
		printf("%d\n",r);

		r=0;
	}
	
}
		
					

		

