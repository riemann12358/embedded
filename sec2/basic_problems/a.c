#include <stdio.h>
#define LIMIT 19
int main() 
{
	char s[LIMIT + 1]; // \0
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; i++) 
	{
		if(s[i] == ',') s[i] = ' ';
	}
	printf("%s\n", s);
}
