#include<stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{

		 	printf("##\n##");	
		if(i%2!=0 && j%2 !=0)
			printf("..\n..");
		}
		printf("\n");
	}

	return 0;
}
