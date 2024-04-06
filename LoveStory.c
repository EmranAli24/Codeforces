#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	for(int j=0;j<t;j++)
	{

		char str1[]= "codeforces";
		char str2[11];

		fgets(str2,sizeof(str2),stdin);

		int i=0,count=0;

		while(str2[i]!='\0')
		{
			if(str2[i]!=str1[i])
			{
				count++;
			}

			i++;
		}

		printf("%d\n",count);
		
		getchar();
	}

	return 0;

}

