#include<stdio.h>
int main()
{
	int l,b,count=0;

	scanf("%d %d",&l,&b);

	for(int i=0;;i++)
	{
		l=3*l;
		b=2*b;
		count++;

		if(l>b)
			break;
	}

	printf("%d\n",count);

	return 0;
}
