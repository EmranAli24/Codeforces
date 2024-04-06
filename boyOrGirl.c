#include<stdio.h>
#include<string.h>
int main(){
	char str[102];
	int count=0;
	fgets(str,sizeof(str),stdin);
	
	int len = strlen(str);

	for(int i=0;i<len;i++)
	{
		for(int j=0;j<=i;j++)
			{
				if(str[i]==str[j])
				{
					count++;
				}
			}
	}

	printf("%d\n",len-count);
	return 0;
}

