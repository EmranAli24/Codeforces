#include<stdio.h>
int main()
{
	char str[1001];

	scanf("%s",str);

  // str[0]= str[0]+32;
   if(str[0]>='A' && str[0]<='Z')
	   str[0]= str[0];
	else
		str[0] -= 32;

	printf("%s\n",str);

	return 0;
}
