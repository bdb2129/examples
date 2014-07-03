#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int i;
	char *a;
	
	printf("Enter a string.\n");

	a = (char *) malloc(100 * sizeof(char));
	
	for (i = 1; i < argc; i++)
	{
		sprintf(a, "%s\n", argv[i]);
		printf("%s", a);
	}

	return 0;
}
