#include<stdio.h>
#include<string.h>
#include<ctype.h>

void toUpperCase(char *str)
{	
	int i=0;
	while(str[i])
	{
		str[i]=toupper(str[i]);
		i++;
	}
}

void toLowerCase(char *str)
{
	int i=0;
	while(str[i])
		{
			str[i]=tolower(str[i]);
			i++;
		}
}

int main()
{
	char str[102];
	fgets(str,sizeof(str),stdin);
	
//	int len= strlen(str);
	int upper=0 ;
	int lower=0;
    int i;
 while(str[i]!='\0')
 {
	 if(str[i]>='A' && str[i]<='Z')
		 upper++;
	if(str[i]>='a' && str[i]<='z')
		lower++;

		i++;
 }

 if(upper>lower)
 {
	toUpperCase(str);

	 printf("%s\n",str);
 }

/*if(upper==lower)
{
	toLowerCase(str);
	printf("%s\n",str);
}
*/
else 
 {
    toLowerCase(str);
	 printf("%s\n",str);
 }

/* else
	{
		str= tolower
	printf("%s\n",str);*/

return 0;
}
