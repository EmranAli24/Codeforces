#include<stdio.h>
int main()
{
	int n,a,b,c,count=0;
	printf("Enter the number of questions: ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
	 printf("Enter the value of a,b,c : ");
	 scanf("%d %d %d",&a,&b,&c);

	 if(a+b+c>=2)
		count++;
	}
	printf("%d\n",count);
return 0;
}
