//C. Can I Square?

#include<stdio.h>
#include<math.h>
int main()
{
 long long  int t,n,sum=0,check=0;
 
	scanf("%lld",&t);

for(long long int i=0;i<t;i++)
{
	scanf("%lld",&n);

long long int a[n];

	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}

	for(long long int j=0;j<n;j++)
	{
		sum+=a[j];
	}

	 check = sqrt(sum);

	if(check*check == sum)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
    }
	sum=0;
	
}

return 0;
}
