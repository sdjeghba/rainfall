void	o(void)
{
	system("/bin/sh");
	exit(0);
}

void	n(void)
{
	char	buffer[520];

	fgets(buffer, 512, stdin);
	printf(buffer);
	exit(0);
}

int		main(void)
{
	n();
	return (0);
}
