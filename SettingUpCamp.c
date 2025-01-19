#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t);

  for(int i=0;i<t;i++)
  {

	int a,b,c,r1,d,result;
	scanf("%d %d %d",&a,&b,&c);
	
	r1=b%3;
	d= r1+c;
	result= ceil((double)(b+c)/3);
//	printf("%d\n",result);
	
	if(r1==0 || d>=3)
	{
		printf("%d\n",(a+result));
	}
	
	else
		printf("-1\n");


  }

return 0;
}
	 
