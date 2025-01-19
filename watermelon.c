#include<stdio.h>
int main()
{
	int weight;

	//printf("Enter the weight of the watermelon: ");
	scanf("%d",&weight);

	if(weight>2 && (weight-2)%2==0)
		printf("YES\n");
	else 
		printf("NO\n");
	return 0;
}
