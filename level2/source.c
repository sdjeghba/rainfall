

int		p()
{
	char		buffer[76];
	unsigned int	check;

	fflush(stdout);
	gets(buffer);
	if ((check & 0xb0000000) == 0xb0000000)
	{
		printf("(%p\n)", check);
		exit(0);
	}
	puts(buffer);
	strdup(buffer);
	return (0);
}

int		main(void)
{
	p();
	return (0);
}
