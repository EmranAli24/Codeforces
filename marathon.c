#include<stdio.h>
int main()
{
	int testCase;
	int a,b,c,d,count=0;

//	printf("Enter the number of test case: ");
	scanf("%d",&testCase);
	
//	printf("Enter the value of a,b,c,d : ");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	for(int i=0;i<testCase;i++)
	{
	
//		printf("Enter the value of a,b,c,d : ");
        	scanf("%d %d %d %d",&a,&b,&c,&d);

		if(b>a)
		{
		count++;
		}

		if(c>a)
		{
			count++;
		}

		if(d>a)
		{

			count++;
		}

		
		printf("%d\n",count);
		count=0;
	}


return 0;
}
