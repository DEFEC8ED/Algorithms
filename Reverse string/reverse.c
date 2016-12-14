#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1024

int main(void)
{
	char string[MAX], temp;
	int i, j;

	printf("Enter a string:\n");
	fgets(string, MAX, stdin);

	i = 0;
	j = strlen(string) - 1;

	while(i < j)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;

		i++;
		j--;
	}

	printf("\nReversed: %s\n", string);
	return 0;
}
