#include<stdio.h>
int main()
{
	int a1,b,c,d1,temp;
	scanf("%d %d %d",&a1,&b,&c);

  int a[3]={a1,b,c};

  for(int i=0;i<3-1;i++)
 {
  
	  for(int j=0;j<3-1-i;j++)
	  {
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	  }
  }

  d1=(a[1]-a[0])+(a[2]-a[1]);

  printf("%d\n",d1);

  return 0;
}
