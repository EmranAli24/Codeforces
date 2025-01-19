#include<stdio.h>

/*void swapMatrix(int r,int c)
  {
  int r1=r;
  int c1=c;

  if(r1>2)
  r1-=2;
  else if (r1<2)
  r1=2-r1;
  else
  r1=r1;

  if(c1>2)
  c1-=2;
  else if (c1<2)
  c1=2-c1;
  else
  c1=c1;

  printf("%d\n",r1+c1);

  }*/


int main()
{
	int matrix[5][5];

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}

	int row,col;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(matrix[i][j]==1)
			{
				row=i;
				col=j;
			}
			printf("\n");
		}
	}

	//printf("%d\t %d\n",row,col);

	int r1=row;
	int c1=col;

	if(r1>2)
		r1-=2;
	else if (r1<2)
		r1=2-r1;
	else
		r1=0;

	if(c1>2)
		c1-=2;
	else if (c1<2)
		c1=2-c1;
	else
		c1=0;

	//if(r1==2||c1==2)
	printf("%d\n",r1+c1);



	return 0;
}
