#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);

	char str[n];

	scanf("%s",str);

	for(int i=0;i<n-1;i++)
	{
		if(str[i]==str[i+1])
		{

			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}

