#include<stdio.h>
int main(){

	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

		int a,b,c,n,value,remainder;
		scanf("%d %d %d %d",&a,&b,&c,&n);

	int arr[3]={ a,b,c},temp;

		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
			
		}

		int diff1 = arr[2]-arr[1];
		int diff2 = arr[2]-arr[0];

		int result = (n-diff1-diff2);

		if(result%3==0 && result >=0)
			printf("YES\n");
		else
			printf("NO\n");
		}
				



				

	return 0;
}
