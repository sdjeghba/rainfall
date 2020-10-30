
int	main(int ac, char **av)
{
	char	buf1[66];
	char	buf2[65];
	FILE	*fd;

	fd = fopen("/home/user/end/.pass", "r");
	bzero(buf1, 33);
	if (!fd || ac != 2)
		return (-1);
	fread(buf1, 1, 66, stream);
	buf1[atoi(av[1])] = '\0';
	fread(buf2, 1, 65, stream);
	fclose(fd);
	if (strcmp(av[1], buf1) == 0)
		execl("/bin/sh", "sh", 0);
	else
		puts(buf1[66]);
	return (0);
}
