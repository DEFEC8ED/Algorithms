#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

int sort_strings(const void *a, const void *b)
{
	return strcmp( *(char **)a, *(char **)b );
}

int main(void)
{
	char *colors[SIZE] =
	{
		"red", "blue", "green", "white", "yellow", "purple",
		"black", "cyan", "brown", "grey"
	};

	int i;

	printf("Name of colors before sorting.\n");
	for(i = 1; i < SIZE; i++)
	{
		printf("%d. color: %s\n", i, colors[i]);
	}

	printf("\n");

	printf("Sorted colors A-Z.\n");
	qsort(colors, SIZE, sizeof(char *), sort_strings);

	for(i = 1; i < SIZE; i++)
	{
		printf("%d. color: %s\n", i, colors[i]);
	}

	return 0;	
}
