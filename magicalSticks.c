#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{

	int n;
	scanf("%d",&n);

	int result = ceil(n/2.0);
	printf("%d\n",result);
	
	}
	
	return 0;
}

