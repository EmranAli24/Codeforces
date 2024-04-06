#include<stdio.h>
int main()
{
	int k,n,w,t=0;

	scanf("%d %d %d",&k,&n,&w);

	for(int i=1;i<=w;i++)
	{
		t+=(i*k);
	}

	if(t<n)
		printf("0\n");
	else
		printf("%d\n",t-n);

	return 0;
}
