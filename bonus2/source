int		language;

void		greetuser(char *str)
{
	char	buffer[72];
	char	*msg;

	if (language == 1)
		strcpy(buffer, "Hyvää päivää ");
	else if (language == 2)
		strcpy(buffer, "Goedemiddag! ");
	else if (language == 0)
		strcpy(buffer, "Hello ");
	strcat(buffer, str);
	puts(buffer);
}

int			main(int argc, char **argv)
{
	char	str1[40];
	char	str2[32];

	if (argc != 3)
		return (1);
	strncpy(str1, argv[1], 40);
	strncpy(str2, argv[2], 32);
	char *country = getenv("LANG");

	if (!country)
		language = 0;
	else if (strncmp(country, "fi", 2) == 0)
		language = 1;
	else if (strncmp(country, "nl", 2) == 0)
		language = 2;
	greetuser(str1);
}
