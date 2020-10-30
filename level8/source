char	*auth = NULL;
char	*service = NULL;

int		main(void)
{
	char	buffer[132];
	while (42)
	{
		printf("%p, %p \n", auth, service);
		if(!fgets(buffer, 128, stdin))
			break;
		if (strncmp(buffer, "auth", 4) == 0)
		{
			puts("good");
			auth = (char*)malloc(4);
			char *auth_arg = (buffer + 5);
			if (strlen(auth_arg) < 31)
				strcpy(auth, auth_arg);
		}
		if (strncmp(buffer, "reset", 5) == 0)
			free(auth);
		if (strncmp(buffer, "service", 6) == 0)
			service = strdup(buffer + 7);
		if (strncmp(buffer, "login", 5) == 0)
			auth[32] ? system("/bin/sh") : puts("Password: \n");
	}
	return (0);
}
