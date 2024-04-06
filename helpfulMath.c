/*#include<stdio.h>
#include<string.h>
int main()
{
	char s[102];

	fgets(s,sizeof(s),stdin);
	int len = strlen(s);
   int h= s[0],temp;
for(int i=2;i<len;i=i+2)
{
	if(s[i]<h)

	{
		temp=h;
		h=s[i];
		s[i]=temp;
	}
}

for(int i=0;i<len; i++)
{
	printf("%c",s[i]);
}

return 0;
}

*/		
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to evaluate the mathematical expression
int evaluateExpression(char *expression) {
    int result = 0;
    char *token = strtok(expression, "+");
    while (token != NULL) {
        result += atoi(token);
        token = strtok(NULL, "+");
    }
    return result;
}

int main() {
    char expression[1024];
    printf("Enter a mathematical expression (use '+' as delimiter): ");
    fgets(expression, sizeof(expression), stdin);

    // Remove newline character from input
    expression[strcspn(expression, "\n")] = '\0';

    int result = evaluateExpression(expression);
    printf("Result: %d\n", result);

    return 0;
}

