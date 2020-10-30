void	n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

void	m(void)
{
	puts("Nope");
}

int		main(int ac, char **av)
{
	char *str = malloc(64);
	void *addr = malloc(4);
	void (*ptr)(void);

	addr = (char *)0x8048468;
	strcpy(str, av[1]);
	ptr = addr;
	(*ptr)();
	return(0);
}
