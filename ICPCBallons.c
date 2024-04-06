#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

		int n,temp,count=0;
		scanf("%d",&n);

		char str[n];
		scanf("%s",str);

		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(str[j]>str[j+1])
				{
					temp = str[j];
					str[j]=str[j+1];
					str[j+1]=temp;
				}
			}
		}

		//	printf("%s\n",str);
		//	printf("%d\n",size);

		for(int i=0;i<n-1;i++)
		{
			if(str[i]!=str[i+1])
				count++;
			//	if(str[i]==str[i+1])
			//		count2++;

		}

		printf("%d\n",(2*count)+2+(n-count-1));

	}

	return 0;
}
