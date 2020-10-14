#include <stdio.h>
#include <stdlib.h>

int m = 0;

int		v(void)
{
	char buffer[524];
	fgets(buffer, 512, stdin);
	printf("%s", buffer);
	if (m == 64)
	{
		printf("Wait what ?\n");
		system("/bin/sh");
	}
	return (0);
}

int		main(void)
{
	v();
	return (0);
}
