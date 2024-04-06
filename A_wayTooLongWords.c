#include<stdio.h>
#include<string.h>

int main()
{ 
	int n;

//	char str[100];

	//printf("Enter the number of testcase: ");
	scanf("%d",&n);

	while(n>=0)
	{

		char str[102];
		
		//printf("Enter the word: ");
		
		fgets(str,sizeof(str),stdin);
	
		int len= strlen(str);
		
		if(len>11)
		{ 
			printf("%c%d%c\n",str[0],len-3,str[len-2]);
			len=0;
		}
		else
		{
			printf("%s\n",str);
			len=0;
		}
		n--;
	}
	return 0;
}


