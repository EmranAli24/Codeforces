#include<stdio.h>
int main()
{
	int round,count1=0,count2=0;//count=0;
	scanf("%d",&round);

	for(int i=0;i<round;i++)
	{
		int m,c;

		scanf("%d %d",&m,&c);

		if(m>c)
		{
			count1++;
		}

		if(c>m)
		{
			count2++;
		}

/*		if(c==m)
		{
			count++;
		}*/
	}

if(count1>count2)
	printf("Mishka\n");

else if(count2>count1)
	printf("Chris\n");
else
	printf("Friendship is magic!^^\n");

	return 0;
}

